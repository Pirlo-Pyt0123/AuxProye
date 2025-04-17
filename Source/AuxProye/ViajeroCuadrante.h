// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Human.h"
#include "ViajeroCuadrante.generated.h"

/**
 * 
 */
UCLASS()
class AUXPROYE_API AViajeroCuadrante : public AHuman
{
	GENERATED_BODY()

public:

	AViajeroCuadrante();

	virtual void BeginPlay() override;


	//movimiento diferencial  
	virtual void Movimiento(float DeltaTime) override;


private:
	FVector DireccionActual;
	float TiempoRestante;
	
};
