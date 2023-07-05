// Copyright Epic Games, Inc. All Rights Reserved.

#include "JamesStimacGameMode.h"
#include "JamesStimacHUD.h"
#include "JamesStimacCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJamesStimacGameMode::AJamesStimacGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AJamesStimacHUD::StaticClass();
}
