// Copyright Epic Games, Inc. All Rights Reserved.

#include "Target_AnemoneGameMode.h"
#include "Target_AnemoneCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATarget_AnemoneGameMode::ATarget_AnemoneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
