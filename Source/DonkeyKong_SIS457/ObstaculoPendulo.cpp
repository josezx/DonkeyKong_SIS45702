// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoPendulo.h"
#include "Engine/Engine.h"

AObstaculoPendulo::AObstaculoPendulo()
{
    SetNombre(TEXT("Obstaculo Pendulo"));
    SetDanio(12.0f);
    SetVelocidad(22.0f);
}

void AObstaculoPendulo::MostrarMensaje()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Mensaje desde Obstaculo Pendulo"));
    }
}

