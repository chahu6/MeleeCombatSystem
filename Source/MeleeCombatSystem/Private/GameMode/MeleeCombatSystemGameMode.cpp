// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameMode/MeleeCombatSystemGameMode.h"
#include "Character/MeleeCombatSystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMeleeCombatSystemGameMode::AMeleeCombatSystemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
