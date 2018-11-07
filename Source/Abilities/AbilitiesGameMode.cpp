// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "AbilitiesGameMode.h"
#include "AbilitiesHUD.h"
#include "AbilitiesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAbilitiesGameMode::AAbilitiesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAbilitiesHUD::StaticClass();
}
