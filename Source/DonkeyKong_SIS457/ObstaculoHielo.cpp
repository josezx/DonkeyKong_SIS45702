// Fill out your copyright notice in the Description page of Project Settings.
#include "Engine/Engine.h"

#include "ObstaculoHielo.h"

// Sets default values
AObstaculoHielo::AObstaculoHielo()
{
	// Usar los métodos setters para asignar valores a las propiedades encapsuladas
	SetNombre("Obstaculo Hielo");
	SetVelocidad(15.0f);
	SetDanio(25.0f);
}
// Método polimórfico para mostrar mensaje
void AObstaculoHielo::MostrarMensaje()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("Mensaje desde Obstaculo Hielo"));
	}
}