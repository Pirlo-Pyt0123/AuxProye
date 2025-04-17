// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoFrenetico.h"

// Sets default values
AEstadoFrenetico::AEstadoFrenetico()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	VelocidadMovimiento = 300.0f; 
	TiempoCambioDireccion = 4.0f;  
	bEstadoActivo = false;
	ModoZigZag = false;  
	AmplitudZigZag = 60.0f;  
	FrecuenciaZigZag = 10.0f;  

}

void AEstadoFrenetico::ActivarEstado()
{
	bEstadoActivo = true;
}

void AEstadoFrenetico::DesactivarEstado()
{
	bEstadoActivo = false;
	
}

void AEstadoFrenetico::MoverNave(float DeltaTime, AActor* Nave)
{
    if (!bEstadoActivo) return;
    TemporizadorDireccion += DeltaTime;

    if (TemporizadorDireccion >= TiempoCambioDireccion) {
        TemporizadorDireccion = 0.0f;
        CambiarModoMovimiento();
    }

    FVector Location = Nave->GetActorLocation();
    if (ModoZigZag) {
        float OffsetX = AmplitudZigZag * FMath::Sin(FrecuenciaZigZag * GetWorld()->DeltaTimeSeconds);
        Location += (DireccionMovimiento * VelocidadMovimiento * DeltaTime) + FVector(OffsetX, 0.0f, 0.0f);
    }
    else {
        Location += DireccionMovimiento * VelocidadMovimiento * DeltaTime;
    }

    if (Location.X < -1800.0f || Location.X > 1800.0f || Location.Y < -1800.0f || Location.Y > 1800.0f) {
        Location = Nave->GetActorLocation();
        CambiarDireccion();  // Cambia la dirección inmediatamente si se acerca a los límites
    }

    Nave->SetActorLocation(Location);
}

void AEstadoFrenetico::CambiarDireccion()
{
    float RandomAngle = FMath::RandRange(0.0f, 360.0f);
    DireccionMovimiento = FVector(FMath::Cos(FMath::DegreesToRadians(RandomAngle)), FMath::Sin(FMath::DegreesToRadians(RandomAngle)), 0.0f);
}

void AEstadoFrenetico::CambiarModoMovimiento()
{
    ModoZigZag = !ModoZigZag;  // Cambia entre modo recto y zigzag
    if (!ModoZigZag) {
        CambiarDireccion();  // Genera una nueva dirección recta cuando cambia a modo recto
    }
}

// Called when the game starts or when spawned
void AEstadoFrenetico::BeginPlay()
{
	Super::BeginPlay();
	CambiarDireccion();  // Establece una dirección inicial
	
}

// Called every frame
void AEstadoFrenetico::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

