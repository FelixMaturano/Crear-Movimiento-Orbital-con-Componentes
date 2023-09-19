// Copyright Epic Games, Inc. All Rights Reserved.

#include "ComponentesGameMode.h"
#include "ComponentesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AComponentesGameMode::AComponentesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
