// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoDeEscenario.h"
#include "Engine/Engine.h"

AObstaculoDeEscenario::AObstaculoDeEscenario()
{
    SetNombre(TEXT("Obstaculo de Escenario"));
    SetDanio(3.0f);
    SetVelocidad(10.0f);
}

void AObstaculoDeEscenario::MostrarMensaje()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Mensaje desde Obstaculo de Escenario"));
    }
}