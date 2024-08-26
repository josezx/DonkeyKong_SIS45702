// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoDeEscenario.generated.h"

/**
 *
 */
UCLASS()
class DONKEYKONG_SIS457_API AObstaculoDeEscenario : public AObstaculo
{
    GENERATED_BODY()
public:
    // Constructor
    AObstaculoDeEscenario();

    // Override the polymorphic function
    virtual void MostrarMensaje() override;
};