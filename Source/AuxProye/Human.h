// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Estado.h"
#include "Human.generated.h"


UCLASS()
class AUXPROYE_API AHuman : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHuman();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MeshHu;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Movimiento(float DeltaTime) PURE_VIRTUAL(AHuman::Movimiento, ;);


	void CambiarEstado(class IEstado* NuevoEstado);



	class IEstado* EstadoActual;
	class IEstado* EstadoSuenio;
	class IEstado* EstadoFrenetico;
	class IEstado* EstadoPatrulla;



public:

	// Para registrar distancia máxima alcanzada
	FVector PosicionInicial;
	float MaximaDistancia;
	FVector PosicionMasLejana;

	// Timer para mostrar actualizaciones
	FTimerHandle TimerMostrarPosicion;
	FTimerHandle TimerFinalizarSeguimiento;

	// Funciones
	void IniciarSeguimiento();
	void MostrarPosicionMasLejana();
	void FinalizarSeguimiento();

	

};
