// Fill out your copyright notice in the Description page of Project Settings.

#include "DirectiveGamesUIGameModeBase.h"

void ADirectiveGamesUIGameModeBase::BeginPlay()
{
    Super::BeginPlay();
    ChangeMenuWidget(StartingWidgetClass);
}

void ADirectiveGamesUIGameModeBase::ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass)
{
    if(CurrentWidget != nullptr)
    {
        CurrentWidget->RemoveFromViewport();
        CurrentWidget = nullptr;
    }
    if(NewWidgetClass != nullptr)
    {
        CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), NewWidgetClass);
        if(CurrentWidget != nullptr)
        {
            CurrentWidget->AddToViewport();
        }
    }
}
