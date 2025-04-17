// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoPatrullando.h"
#include "Human.h"

// Sets default values
AEstadoPatrullando::AEstadoPatrullando()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bEstadoActivo = false;

	PuntoDestino = PuntoInicio + FVector(600, 0, 0); // patrulla 600 unidades a la derecha
	bYendoHaciaDestino = true;


}

void AEstadoPatrullando::ActivarEstado()
{
	bEstadoActivo = true;
}

void AEstadoPatrullando::DesactivarEstado()
{
	bEstadoActivo = false;
}

void AEstadoPatrullando::MoverNave(float DeltaTime, AActor* Nave)
{
	if (!bEstadoActivo || !Nave) return;

	FVector Actual = Nave->GetActorLocation();
	FVector Objetivo = bYendoHaciaDestino ? PuntoDestino : PuntoInicio;

	// Mueve hacia el objetivo
	FVector Direccion = (Objetivo - Actual).GetSafeNormal();
	Nave->SetActorLocation(Actual + Direccion * Velocidad * DeltaTime);

	// Si llegó cerca del objetivo, cambia de dirección
	if (FVector::Dist(Actual, Objetivo) < 10.0f)
	{
		bYendoHaciaDestino = !bYendoHaciaDestino;
	}
}


// Called when the game starts or when spawned
void AEstadoPatrullando::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoPatrullando::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

