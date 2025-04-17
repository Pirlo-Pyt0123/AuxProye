// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Estado.h"
#include "EstadoDormido.generated.h"

UCLASS()
class AUXPROYE_API AEstadoDormido : public AActor, IEstado
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoDormido();


	void ActivarEstado() override;
	void DesactivarEstado() override;
	void MoverNave(float DeltaTime, AActor* Nave) override;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



public:
	bool bEstadoActivo;
	FVector DireccionMovimiento;
	float TiempoCambioDireccion;
	float TemporizadorDireccion;
	float VelocidadMovimiento;
	bool ModoZigZag;
	float AmplitudZigZag;
	float FrecuenciaZigZag;


};
