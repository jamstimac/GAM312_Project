// Copyright Epic Games, Inc. All Rights Reserved.

#include "JamesStimacGameMode.h"
#include "JamesStimacHUD.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"

AJamesStimacGameMode::AJamesStimacGameMode()
	: Super()
{
	PrimaryActorTick.bCanEverTick = true;

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/MyJamesStimacCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AJamesStimacHUD::StaticClass();
}

void AJamesStimacGameMode::BeginPlay()
{
	Super::BeginPlay();

	// set initial state to EPlaying
	SetCurrentState(EGamePlayState::EPlaying);

	// get Character ref
	MyCharacter = Cast<AJamesStimacCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
}

void AJamesStimacGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// ????
	GetWorld()->GetMapName();

	/// if Character ref not nullptr
	if (MyCharacter)
	{
		// if Health is nearly zero within 3 decimal places
		if (FMath::IsNearlyZero(MyCharacter->GetHealth(), 0.001f))
		{
			// End Game
			SetCurrentState(EGamePlayState::EGameOver);
		}
	}
}
/** Returns the current playing state */
EGamePlayState AJamesStimacGameMode::GetCurrentState() const
{
	// return protected variable CurrentState
	return CurrentState;
}
/** Sets a new playing state */
void AJamesStimacGameMode::SetCurrentState(EGamePlayState NewState)
{
	// set current state to NewState
	CurrentState = NewState;
	// handle new state effects
	HandleNewState(CurrentState);

}
/** Handle any function calls that rely upon changing the playing state of our game */
void AJamesStimacGameMode::HandleNewState(EGamePlayState NewState)
{
	switch (NewState)
	{
		// General Gameplay state, called on BeginPlay
		case EGamePlayState::EPlaying:
		{
			// do nothing
		}
		break;

		// Game Over state called when Health nearly 0
		case EGamePlayState::EGameOver:
		{
			UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
		}
		break;

		// Unknown/Default state
		default:
		case EGamePlayState::EUnknown:
		{
			// do nothing
		}
		break;
	}

}
