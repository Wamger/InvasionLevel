// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "InvasionLevelGameMode.h"
#include "InvasionLevelCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInvasionLevelGameMode::AInvasionLevelGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
