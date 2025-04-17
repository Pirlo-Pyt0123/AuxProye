// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AuxProyeGameMode.generated.h"

class AViajeroErrante;
class AViajeroCuadrante;
UCLASS(MinimalAPI)
class AAuxProyeGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AAuxProyeGameMode();

 
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	//punteros a las clases
	AViajeroCuadrante* ViajeroCuadrante;
	AViajeroErrante* ViajeroErrante;
};



