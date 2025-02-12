// Fill out your copyright notice in the Description page of Project Settings.


#include "Score_UI.h"
#include "Components/TextBlock.h"

void UScore_UI::UpdateScore(int32 Score)
{
    if (ScoreText)
    {
        ScoreText->SetText(FText::FromString(FString::Printf(TEXT("Score: %d"), Score)));
    }
}
