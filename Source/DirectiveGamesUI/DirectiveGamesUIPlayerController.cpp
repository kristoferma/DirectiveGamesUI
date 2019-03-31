// Fill out your copyright notice in the Description page of Project Settings.

#include "DirectiveGamesUIPlayerController.h"

void ADirectiveGamesUIPlayerController::BeginPlay()
{
    Super::BeginPlay();
    SetInputMode(FInputModeGameAndUI());
}
