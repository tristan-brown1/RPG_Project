// Copyright Epic Games, Inc. All Rights Reserved.

#include "RPG_ProjectGameMode.h"
#include "RPG_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARPG_ProjectGameMode::ARPG_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
