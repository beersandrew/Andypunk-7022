// Copyright Epic Games, Inc. All Rights Reserved.

#include "Andypunk7022GameMode.h"
#include "Andypunk7022Character.h"
#include "UObject/ConstructorHelpers.h"

AAndypunk7022GameMode::AAndypunk7022GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
