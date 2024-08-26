// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoPendulo.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AObstaculoPendulo : public AObstaculo
{
	GENERATED_BODY()

public:
    // Constructor
    AObstaculoPendulo();

    // Override the polymorphic function
    virtual void MostrarMensaje() override;

	
};
