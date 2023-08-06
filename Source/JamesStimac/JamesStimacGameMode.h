// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "JamesStimacCharacter.h"
#include "JamesStimacGameMode.generated.h"

/** GamePlayState enum declaration */
UENUM()
enum class EGamePlayState
{
	EPlaying,
	EGameOver,
	EUnknown
};

/** Class declaration */
UCLASS(minimalapi)
class AJamesStimacGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AJamesStimacGameMode();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	/** Returns the current playing state */
	UFUNCTION(BlueprintPure, Category = "Health")
		EGamePlayState GetCurrentState() const;

	AJamesStimacCharacter* MyCharacter;
	/** Sets a new playing state */
	void SetCurrentState(EGamePlayState NewState);

private:
	/** Keeps track of the current playing state */
	EGamePlayState CurrentState;

	/** Handle any function calls that rely upon changing the playing state of our game */
	void HandleNewState(EGamePlayState NewState);

};



