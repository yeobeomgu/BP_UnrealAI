// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpaceAIGameMode.h"
#include "SpaceAICharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpaceAIGameMode::ASpaceAIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
