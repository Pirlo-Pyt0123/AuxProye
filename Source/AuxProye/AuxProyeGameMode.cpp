// Copyright Epic Games, Inc. All Rights Reserved.

#include "AuxProyeGameMode.h"
#include "AuxProyePawn.h"

AAuxProyeGameMode::AAuxProyeGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AAuxProyePawn::StaticClass();
}

