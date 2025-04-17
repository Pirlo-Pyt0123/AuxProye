// Copyright Epic Games, Inc. All Rights Reserved.

#include "AuxProyeGameMode.h"
#include "AuxProyePawn.h"
#include "Human.h"
#include "ViajeroErrante.h"
#include "ViajeroCuadrante.h"

AAuxProyeGameMode::AAuxProyeGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AAuxProyePawn::StaticClass();
}

void AAuxProyeGameMode::BeginPlay()
{
	Super::BeginPlay();
	// Create the ViajeroErrante and ViajeroCuadrante instances
	ViajeroErrante = GetWorld()->SpawnActor<AViajeroErrante>(AViajeroErrante::StaticClass(), FVector(0, 0, 200), FRotator(0, 0, 0));

	ViajeroCuadrante = GetWorld()->SpawnActor<AViajeroCuadrante>(AViajeroCuadrante::StaticClass(), FVector(0, 0, 200), FRotator(0, 0, 0));
}

void AAuxProyeGameMode::Tick(float DeltaTime)
{
}

