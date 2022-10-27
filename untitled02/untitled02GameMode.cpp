// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "untitled02GameMode.h"
#include "untitled02Character.h"
#include "UObject/ConstructorHelpers.h"

Auntitled02GameMode::Auntitled02GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
