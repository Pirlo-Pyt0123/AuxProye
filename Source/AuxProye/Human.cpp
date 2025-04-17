// Fill out your copyright notice in the Description page of Project Settings.


#include "Human.h"
#include "Components/StaticMeshComponent.h"
#include "EstadoPatrullando.h"
#include "EstadoFrenetico.h"
#include "EstadoDormido.h"
#include "Estado.h"
#include "Engine/Engine.h"
#include "TimerManager.h"
#include "GameFramework/Actor.h"

// Sets default values
AHuman::AHuman()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshHu = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MeshHu->SetupAttachment(RootComponent);
	RootComponent = MeshHu;




}

// Called when the game starts or when spawned
void AHuman::BeginPlay()
{
	Super::BeginPlay();

	EstadoSuenio = Cast<IEstado>(GetWorld()->SpawnActor<AEstadoDormido>(AEstadoDormido::StaticClass()));
	EstadoFrenetico = Cast<IEstado>(GetWorld()->SpawnActor<AEstadoFrenetico>(AEstadoFrenetico::StaticClass()));
	EstadoPatrulla = Cast<IEstado>(GetWorld()->SpawnActor<AEstadoPatrullando>(AEstadoPatrullando::StaticClass()));

	CambiarEstado(EstadoSuenio);



	PosicionInicial = GetActorLocation();
	MaximaDistancia = 0.0f;
	PosicionMasLejana = PosicionInicial;

	IniciarSeguimiento(); // <- comenzamos el seguimiento
	
}

// Called every frame
void AHuman::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Movimiento(DeltaTime);

	
}

void CambiarEstado(IEstado* NuevoEstado)
{
	if (NuevoEstado)
	{
		NuevoEstado->ActivarEstado();
	}

}

void IniciarSeguimiento()
{
	// Mostrar cada 10 segundos
	//GetWorld()->GetTimerManager().SetTimer(TimerMostrarPosicion, this, &AHuman::MostrarPosicionMasLejana, 10.0f, true);

	// Detener después de 20 segundos
	//GetWorld()->GetTimerManager().SetTimer(TimerFinalizarSeguimiento, this, &AHuman::FinalizarSeguimiento, 20.0f, false);
}

void MostrarPosicionMasLejana()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Posicion mas lejana: ");
}

void FinalizarSeguimiento()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Seguimiento finalizado"));
}
