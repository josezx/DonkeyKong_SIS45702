// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoSierra.h"
#include "Engine/Engine.h"
AObstaculoSierra::AObstaculoSierra()
{
    // Inicializar propiedades específicas del obstáculo Sierra usando métodos accesores
    SetNombre("Obstaculo Sierra");
    SetVelocidad(20.0f);
    SetDanio(30.0f);
}

void AObstaculoSierra::MostrarMensaje()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Mensaje desde Obstaculo Sierra"));
    }
}