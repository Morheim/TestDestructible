// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestDestructibleGameMode.h"
#include "TestDestructibleCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestDestructibleGameMode::ATestDestructibleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
