// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TanksGameMode.h"
#include "TanksPlayerController.h"
#include "TanksCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATanksGameMode::ATanksGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATanksPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}