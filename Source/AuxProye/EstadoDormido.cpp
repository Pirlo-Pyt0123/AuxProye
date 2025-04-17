// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoDormido.h"

// Sets default values
AEstadoDormido::AEstadoDormido()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AEstadoDormido::ActivarEstado()
{
	bEstadoActivo = true;
}

void AEstadoDormido::DesactivarEstado()
{
	bEstadoActivo = false;
}

void AEstadoDormido::MoverNave(float DeltaTime, AActor* Nave)
{
	if (!bEstadoActivo || !Nave) return;

	// Movimiento oscilatorio vertical suave (reposo flotante)
	FVector PosicionActual = Nave->GetActorLocation();

	// Usamos tiempo total del mundo para que la animación sea suave
	float Tiempo = GetWorld()->GetTimeSeconds();

	// Calculamos nueva posición con una oscilación senoidal
	float OffsetZ = FMath::Sin(Tiempo * 1.5f) * 10.0f; // amplitud de 10, velocidad suave

	// Aplicamos movimiento solo en Z (vertical)
	FVector NuevaPosicion = PosicionActual;
	NuevaPosicion.Z += OffsetZ;

	Nave->SetActorLocation(NuevaPosicion);
}



// Called when the game starts or when spawned
void AEstadoDormido::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoDormido::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

