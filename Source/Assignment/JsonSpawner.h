// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Http.h"
#include "BoxData.h"
#include "JsonSpawner.generated.h"


UCLASS()
class ASSIGNMENT_API AJsonSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJsonSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	


private:

	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	


	void SpawnBoxFromJson(TSharedPtr<FJsonObject> const JsonObject);



	UPROPERTY(EditDefaultsOnly)
    TSubclassOf<class ASpawnableBox> BoxClass;                               // Reference to the box class

    UMaterialInstanceDynamic* GetMaterialFromColor(FString ColorName);



	TMap<FString, FBoxData> BoxTypeMap; // Stores box types based on JSON data

};
