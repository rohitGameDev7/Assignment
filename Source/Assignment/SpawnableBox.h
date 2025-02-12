#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoxData.h"
#include "SpawnableBox.generated.h"

UCLASS()
class ASSIGNMENT_API ASpawnableBox : public AActor
{
    GENERATED_BODY()
    
public:	
    ASpawnableBox();

protected:
    virtual void BeginPlay() override;

public:	
    virtual void Tick(float DeltaTime) override;

   
  
    /** Box Health */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Box Properties")
    float Health;

    /** Box Score */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Box Properties")
    int32 Score;

    /** Function to Handle Damage */
    UFUNCTION()
    void TakeDamage(float DamageAmount);


    UFUNCTION()
    void DestroyBox();


    UFUNCTION()
    void InitializeBox(float NewHealth, int32 NewScore, UMaterialInstanceDynamic* Material);


    void SetBoxColor(FString ColorName);

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* BoxMesh;

    void Initialize(const FBoxData& BoxData);


private:
     

    void ApplyColor(FLinearColor Color);
};
