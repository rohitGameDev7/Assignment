// Fill out your copyright notice in the Description page of Project Settings.


#include "JsonSpawner.h"
#include "SpawnableBox.h"
#include "Json.h"
#include "JsonUtilities.h"
#include "HttpModule.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "roapi.h"




// Sets default values
AJsonSpawner::AJsonSpawner()
{
 	
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJsonSpawner::BeginPlay()
{
	Super::BeginPlay();

    // HTTP Request to fetch JSON
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &AJsonSpawner::OnResponseReceived);
    Request->SetURL("https://raw.githubusercontent.com/CyrusCHAU/Varadise-Technical-Test/refs/heads/main/data.json");               //  URL
    Request->SetVerb("GET");
    Request->ProcessRequest();
	
}



void AJsonSpawner::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (!bWasSuccessful || !Response.IsValid())
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to get JSON data"));
        return;
    }

    FString JsonString = Response->GetContentAsString();
    UE_LOG(LogTemp, Warning, TEXT("Received JSON: %s"), *JsonString);

    // Parse JSON
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);

    if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
    {
        const TArray<TSharedPtr<FJsonValue>>* BoxesArray;
        if (JsonObject->TryGetArrayField("boxes", BoxesArray))
        {
            for (const TSharedPtr<FJsonValue>& BoxValue : *BoxesArray)
            {
                SpawnBoxFromJson(BoxValue->AsObject());
            }
        }
    }
}



void AJsonSpawner::SpawnBoxFromJson(TSharedPtr<FJsonObject> JsonObject)
{
    if (!JsonObject.IsValid()) return;

    // Extract types
    const TArray<TSharedPtr<FJsonValue>>* TypesArray;
    if (JsonObject->TryGetArrayField(TEXT("types"), TypesArray))
    {
        for (auto& Type : *TypesArray)
        {
            TSharedPtr<FJsonObject> TypeObject = Type->AsObject();
            if (TypeObject.IsValid())
            {
                FString Name = TypeObject->GetStringField("name");
                TArray<TSharedPtr<FJsonValue>> ColorArray = TypeObject->GetArrayField("color");

                FVector Color(
                    ColorArray[0]->AsNumber(),
                    ColorArray[1]->AsNumber(),
                    ColorArray[2]->AsNumber()
                );

                FBoxData BoxData;
                BoxData.Color = Color;
                BoxData.Health = TypeObject->GetNumberField("health");
                BoxData.Score = TypeObject->GetIntegerField("score");

                BoxTypeMap.Add(Name, BoxData);
            }
        }
    }

    // Extract objects
    const TArray<TSharedPtr<FJsonValue>>* ObjectsArray;
    if (JsonObject->TryGetArrayField(TEXT("objects"), ObjectsArray))
    {
        for (auto& Obj : *ObjectsArray)
        {
            TSharedPtr<FJsonObject> ObjectData = Obj->AsObject();
            FString Type = ObjectData->GetStringField("type");

            if (!BoxTypeMap.Contains(Type)) continue;

            // Extract Transform
            TSharedPtr<FJsonObject> TransformObject = ObjectData->GetObjectField("transform");
            FVector Location = FVector(
                TransformObject->GetArrayField("location")[0]->AsNumber(),
                TransformObject->GetArrayField("location")[1]->AsNumber(),
                TransformObject->GetArrayField("location")[2]->AsNumber()
            );

            FRotator Rotation = FRotator(
                TransformObject->GetArrayField("rotation")[0]->AsNumber(),
                TransformObject->GetArrayField("rotation")[1]->AsNumber(),
                TransformObject->GetArrayField("rotation")[2]->AsNumber()
            );

            FVector Scale = FVector(
                TransformObject->GetArrayField("scale")[0]->AsNumber(),
                TransformObject->GetArrayField("scale")[1]->AsNumber(),
                TransformObject->GetArrayField("scale")[2]->AsNumber()
            );

            // Spawn Box
            FActorSpawnParameters SpawnParams;
            ASpawnableBox* NewBox = GetWorld()->SpawnActor<ASpawnableBox>(BoxClass, Location, Rotation, SpawnParams);
            if (NewBox)
            {
                NewBox->SetActorScale3D(Scale);
                NewBox->Initialize(BoxTypeMap[Type]);
            }
        }
    }
}


UMaterialInstanceDynamic* AJsonSpawner::GetMaterialFromColor(FString ColorName)
{
    UMaterialInstanceDynamic* DynamicMaterial = nullptr;

    static ConstructorHelpers::FObjectFinder<UMaterial> RedMat(TEXT("/Game/Materials/RedMaterial"));
    static ConstructorHelpers::FObjectFinder<UMaterial> BlueMat(TEXT("/Game/Materials/BlueMaterial"));

    if (ColorName == "Red" && RedMat.Succeeded())
    {
        DynamicMaterial = UMaterialInstanceDynamic::Create(RedMat.Object, this);
    }
    else if (ColorName == "Blue" && BlueMat.Succeeded())
    {
        DynamicMaterial = UMaterialInstanceDynamic::Create(BlueMat.Object, this);
    }

    return DynamicMaterial;
}



