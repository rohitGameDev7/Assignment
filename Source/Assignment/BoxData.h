#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoxData.generated.h"

USTRUCT(BlueprintType) // Allows struct to be used in Blueprints
struct FBoxData
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite)
    FVector Color;

    UPROPERTY(BlueprintReadWrite)
    float Health;

    UPROPERTY(BlueprintReadWrite)
    int32 Score;

    // Default constructor
    FBoxData()
        : Color(FVector(255, 255, 255)), Health(0), Score(0) {}
};
