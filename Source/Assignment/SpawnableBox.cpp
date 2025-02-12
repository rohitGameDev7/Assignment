#include "SpawnableBox.h"
#include "AssignmentCharacter.h"
#include "GameFramework/PlayerController.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/Actor.h"

ASpawnableBox::ASpawnableBox()
{
    PrimaryActorTick.bCanEverTick = true;

    // Create a Static Mesh Component
    BoxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoxMesh"));
    RootComponent = BoxMesh;

    // Load a Default Cube Mesh
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("/Engine/BasicShapes/Cube"));
    if (CubeMesh.Succeeded())
    {
        BoxMesh->SetStaticMesh(CubeMesh.Object);
    }

    static ConstructorHelpers::FObjectFinder<UMaterial> BaseMaterial(TEXT("/Game/Material/Box_M.Box_M"));
    if (BaseMaterial.Succeeded())
    {
        BoxMesh->SetMaterial(0, BaseMaterial.Object);
    }

    // Default Values
    Health = 10.0f;
    Score = 10;

   
}

void ASpawnableBox::BeginPlay()
{
    Super::BeginPlay();

    if (!BoxMesh)
    {
        UE_LOG(LogTemp, Error, TEXT("BoxMesh is NULL! Make sure it's created properly."));
    }
}

void ASpawnableBox::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Function to Apply Damage to the Box
void ASpawnableBox::TakeDamage(float DamageAmount)
{
    Health -= DamageAmount;
    if (Health <= 0)
    {
        DestroyBox();  // Calls DestroyBox when health is zero
    }
}

// Function to Destroy the Box and Award Score
void ASpawnableBox::DestroyBox()
{
    APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
    if (PlayerController)
    {
        AAssignmentCharacter* PlayerCharacter = Cast<AAssignmentCharacter>(PlayerController->GetPawn());
        if (PlayerCharacter)
        {
            PlayerCharacter->AddScore(Score); // Add points before destroying
        }
    }

    Destroy(); // Destroy the box
}

void ASpawnableBox::InitializeBox(float NewHealth, int32 NewScore, UMaterialInstanceDynamic* Material)
{
    Health = NewHealth;
    Score = NewScore;

    if (Material)
    {
        BoxMesh->SetMaterial(0, Material);
    }
}


void ASpawnableBox::Initialize(const FBoxData& BoxData)
{
    UE_LOG(LogTemp, Warning, TEXT("Initializing Box with Health: %f, Score: %d"), BoxData.Health, BoxData.Score);

    Health = BoxData.Health;
    Score = BoxData.Score;

    // Convert Color to Unreal Format (0-1 range)
    FLinearColor ColorValue(BoxData.Color.X / 255.0f, BoxData.Color.Y / 255.0f, BoxData.Color.Z / 255.0f);

    // Debug Log for Color
    UE_LOG(LogTemp, Warning, TEXT("Applying Color: R=%f, G=%f, B=%f"), ColorValue.R, ColorValue.G, ColorValue.B);

    // Ensure BoxMesh exists
    if (BoxMesh)
    {
        // Create and assign a Dynamic Material Instance
        UMaterialInstanceDynamic* DynamicMaterial = BoxMesh->CreateAndSetMaterialInstanceDynamic(0);
        if (DynamicMaterial)
        {
            DynamicMaterial->SetVectorParameterValue(TEXT("BaseColor"), ColorValue);
            UE_LOG(LogTemp, Warning, TEXT("Material Applied Successfully!"));
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to create Dynamic Material Instance!"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("BoxMesh is NULL!"));
    }
}



void ASpawnableBox::SetBoxColor(FString ColorName)
{
    UE_LOG(LogTemp, Warning, TEXT("Setting Box Color: %s"), *ColorName);

    FLinearColor Color;

    if (ColorName.Equals("Red", ESearchCase::IgnoreCase))
        Color = FLinearColor::Red;
    else if (ColorName.Equals("Green", ESearchCase::IgnoreCase))
        Color = FLinearColor::Green;
    else if (ColorName.Equals("Blue", ESearchCase::IgnoreCase))
        Color = FLinearColor::Blue;
    else
        Color = FLinearColor::White; // Default Color

    ApplyColor(Color);
}

void ASpawnableBox::ApplyColor(FLinearColor Color)
{
    if (BoxMesh)
    {
        UMaterialInstanceDynamic* DynamicMaterial = BoxMesh->CreateAndSetMaterialInstanceDynamic(0);
        if (DynamicMaterial)
        {
            DynamicMaterial->SetVectorParameterValue(TEXT("BaseColor"), Color);
            UE_LOG(LogTemp, Warning, TEXT("Material Color Set Successfully"));
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to Create Dynamic Material!"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("BoxMesh is NULL!"));
    }
    
}


