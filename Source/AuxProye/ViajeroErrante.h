// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Human.h"
#include "ViajeroErrante.generated.h"

/**
 * 
 */
UCLASS()
class AUXPROYE_API AViajeroErrante : public AHuman
{
	GENERATED_BODY()

public:

	AViajeroErrante();



	//movimiento circular
	virtual void Movimiento(float DeltaTime) override;

	virtual void BeginPlay() override;


private:
	FVector Centro;
	float Radio;
	float VelocidadAngular;
	float Angulo;
};
