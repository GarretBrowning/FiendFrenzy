// Copyright Epic Games, Inc. All Rights Reserved.

#include "FiendFrenzyGameMode.h"
#include "FiendFrenzyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFiendFrenzyGameMode::AFiendFrenzyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
