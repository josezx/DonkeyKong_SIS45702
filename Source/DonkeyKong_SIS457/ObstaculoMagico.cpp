// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoMagico.h"
#include "Engine/Engine.h"

AObstaculoMagico::AObstaculoMagico()
{
    SetNombre(TEXT("Obstaculo Magico"));
    SetDanio(7.0f);
    SetVelocidad(18.0f);
}

void AObstaculoMagico::MostrarMensaje()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("Mensaje desde Obstaculo Magico"));
    }
}