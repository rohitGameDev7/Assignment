#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnableBox.h"
#include "BoxSpawner.generated.h"

UCLASS()
class ASSIGNMENT_API ABoxSpawner : public AActor
{
    GENERATED_BODY()
    
public:	
    ABoxSpawner();

protected:
    virtual void BeginPlay() override;

public:	
    virtual void Tick(float DeltaTime) override;

    /** Function to Spawn a Box */
    UFUNCTION()
    void SpawnBox();

    /** Timer Handle for Continuous Spawning */
    FTimerHandle SpawnTimerHandle;

    /** Box Spawn Interval */
    UPROPERTY(EditAnywhere, Category = "Spawning")
    float SpawnInterval;

    /** Box Spawn Range */
    UPROPERTY(EditAnywhere, Category = "Spawning")
    FVector SpawnArea;
};
