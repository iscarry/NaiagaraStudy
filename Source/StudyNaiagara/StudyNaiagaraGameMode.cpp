// Copyright Epic Games, Inc. All Rights Reserved.

#include "StudyNaiagaraGameMode.h"
#include "StudyNaiagaraCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStudyNaiagaraGameMode::AStudyNaiagaraGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
