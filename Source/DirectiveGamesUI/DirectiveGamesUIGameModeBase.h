// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "DirectiveGamesUIGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class DIRECTIVEGAMESUI_API ADirectiveGamesUIGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
    public:
    UFUNCTION(BlueprintCallable, Category = "UMG UI")
    void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);
    
    protected:
    virtual void BeginPlay() override;
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG UI")
    TSubclassOf<UUserWidget> StartingWidgetClass;
    
    UPROPERTY()
    UUserWidget* CurrentWidget;
};
