// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Estado.h"
#include "EstadoPatrullando.generated.h"

UCLASS()
class AUXPROYE_API AEstadoPatrullando : public AActor, public IEstado
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoPatrullando();

	void ActivarEstado() override;
	void DesactivarEstado() override;
	void MoverNave(float DeltaTime, AActor* Nave) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// AEstadoPatrullador.h
	FVector PuntoInicio;
	FVector PuntoDestino;
	bool bYendoHaciaDestino = true;
	bool bInicializado = false;
	float Velocidad = 200.0f;
	bool bEstadoActivo;

};
