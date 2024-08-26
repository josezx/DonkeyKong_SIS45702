// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoMagico.generated.h"

/**
 *
 */
UCLASS()
class DONKEYKONG_SIS457_API AObstaculoMagico : public AObstaculo
{
    GENERATED_BODY()

public:
    // Constructor
    AObstaculoMagico();

    // Override the polymorphic function
    virtual void MostrarMensaje() override;
};