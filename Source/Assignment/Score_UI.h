// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Score_UI.generated.h"

/**
 * 
 */
UCLASS()
class ASSIGNMENT_API UScore_UI : public UUserWidget
{
	GENERATED_BODY()
	

public:
    UPROPERTY(meta = (BindWidget))
    class UTextBlock* ScoreText;

    UFUNCTION(BlueprintCallable)
    void UpdateScore(int32 Score);
};
