#include "BoxSpawner.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "GameFramework/Actor.h"
#include "Math/UnrealMathUtility.h"

ABoxSpawner::ABoxSpawner()
{
    PrimaryActorTick.bCanEverTick = true;

    // Default Values
    SpawnInterval = 2.0f;
    SpawnArea = FVector(0.0f, 0.0f, 0.0f);
}

void ABoxSpawner::BeginPlay()
{
    Super::BeginPlay();

    // Start Spawning Boxes at Regular Intervals
    GetWorldTimerManager().SetTimer(SpawnTimerHandle, this, &ABoxSpawner::SpawnBox, SpawnInterval, true);
}

void ABoxSpawner::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ABoxSpawner::SpawnBox()
{
    if (GetWorld())
    {
        FVector SpawnLocation = GetActorLocation() + FVector(FMath::RandRange(-1.0f * (float)SpawnArea.X, (float)SpawnArea.X),
            FMath::RandRange(-1.0f * (float)SpawnArea.Y, (float)SpawnArea.Y),
            FMath::RandRange(0.0f, (float)SpawnArea.Z));



        FRotator SpawnRotation = FRotator::ZeroRotator;

        // Spawn the Box
        GetWorld()->SpawnActor<ASpawnableBox>(ASpawnableBox::StaticClass(), SpawnLocation, SpawnRotation);
    }
}
