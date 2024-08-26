// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoHuracan.h"
#include "Engine/Engine.h"

AObstaculoHuracan::AObstaculoHuracan()
{
    SetNombre(TEXT("Obst�culo Hurac�n"));
    SetDanio(20.0f);
    SetVelocidad(30.0f);
}

void AObstaculoHuracan::MostrarMensaje()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Mensaje desde Obst�culo Hurac�n"));
    }
}