// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DirectiveGamesUIPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class DIRECTIVEGAMESUI_API ADirectiveGamesUIPlayerController : public APlayerController
{
	GENERATED_BODY()
    public:
        virtual void BeginPlay() override;
};
