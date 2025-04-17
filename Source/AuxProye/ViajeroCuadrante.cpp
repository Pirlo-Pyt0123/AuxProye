// Fill out your copyright notice in the Description page of Project Settings.


#include "ViajeroCuadrante.h"
#include "Components/StaticMeshComponent.h"

AViajeroCuadrante::AViajeroCuadrante()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	if (ShipMesh.Succeeded())
	{
		MeshHu->SetStaticMesh(ShipMesh.Object);
	}

	TiempoRestante = 0.0f;
	DireccionActual = FVector::ZeroVector;
	
}

void AViajeroCuadrante::BeginPlay()
{
	Super::BeginPlay();

}

void AViajeroCuadrante::Movimiento(float DeltaTime)
{
	TiempoRestante -= DeltaTime;

	if (TiempoRestante <= 0.0f)
	{
		// Cambia de dirección aleatoriamente cada cierto tiempo
		float X = FMath::RandRange(-1.0f, 1.0f);
		float Y = FMath::RandRange(-1.0f, 1.0f);
		DireccionActual = FVector(X, Y, 0).GetSafeNormal();
		TiempoRestante = FMath::RandRange(1.0f, 3.0f);
	}

	// Movimiento continuo en la dirección actual
	FVector NuevaUbicacion = GetActorLocation() + DireccionActual * 200 * DeltaTime;
	SetActorLocation(NuevaUbicacion);
}
