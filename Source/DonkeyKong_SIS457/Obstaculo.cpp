// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo.h"

// Sets default values
AObstaculo::AObstaculo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Valores predeterminados de las propiedades
	Nombre = "Obstaculo Base";
	Velocidad = 0.0f;
	Danio = 0.0f;
}

// Called when the game starts or when spawned
void AObstaculo::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AObstaculo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObstaculo::MostrarMensaje()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Mensaje desde Obstáculo Base"));
	}
}