// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoLaser.h"
#include "Engine/Engine.h"
AObstaculoLaser::AObstaculoLaser()
{
    SetNombre(TEXT("Obstaculo Laser"));
    SetDanio(15.0f);
    SetVelocidad(25.0f);
}

void AObstaculoLaser::MostrarMensaje()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Mensaje desde Obstaculo Laser"));
    }
}