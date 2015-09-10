// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Game_GT.h"
#include "Game_GTGameMode.h"
#include "Game_GTPlayerController.h"
#include "Game_GTCharacter.h"

AGame_GTGameMode::AGame_GTGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGame_GTPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}