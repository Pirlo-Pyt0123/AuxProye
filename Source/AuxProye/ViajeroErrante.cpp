// Fill out your copyright notice in the Description page of Project Settings.


#include "ViajeroErrante.h"
#include "Components/StaticMeshComponent.h"

AViajeroErrante::AViajeroErrante()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	if (ShipMesh.Succeeded())
	{
		MeshHu->SetStaticMesh(ShipMesh.Object);
	}
	Radio = FMath::RandRange(200.0f, 400.0f);
	VelocidadAngular = FMath::RandRange(30.0f, 90.0f); // grados por segundo
	Angulo = FMath::RandRange(0.0f, 360.0f);
}
void AViajeroErrante::BeginPlay()
{
	Super::BeginPlay();
	Centro = GetActorLocation();
}

void AViajeroErrante::Movimiento(float DeltaTime)
{
	Angulo += VelocidadAngular * DeltaTime;
	if (Angulo >= 360.f) Angulo -= 360.f;

	float Radianes = FMath::DegreesToRadians(Angulo);
	float X = FMath::Cos(Radianes) * Radio;
	float Y = FMath::Sin(Radianes) * Radio;

	FVector NuevaPosicion = Centro + FVector(X, Y, 0);
	SetActorLocation(NuevaPosicion);
}


