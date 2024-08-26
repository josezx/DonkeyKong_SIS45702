// Fill out your copyright notice in the Description page of Project Settings.
#include "Engine/Engine.h"

#include "ObstaculoHielo.h"

// Sets default values
AObstaculoHielo::AObstaculoHielo()
{
	// Usar los m�todos setters para asignar valores a las propiedades encapsuladas
	SetNombre("Obstaculo Hielo");
	SetVelocidad(15.0f);
	SetDanio(25.0f);
}
// M�todo polim�rfico para mostrar mensaje
void AObstaculoHielo::MostrarMensaje()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("Mensaje desde Obstaculo Hielo"));
	}
}