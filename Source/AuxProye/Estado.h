// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Estado.generated.h"

class AHuman;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEstado : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class AUXPROYE_API IEstado
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	// M�todo puro que debe implementar cada clase de estado
	virtual void ActivarEstado() = 0;
	virtual void DesactivarEstado() = 0;
	virtual void MoverNave(float DeltaTime, AActor* Nave) = 0;
};
