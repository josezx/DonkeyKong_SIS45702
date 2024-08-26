// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoSierra.generated.h"

/**
 *
 */
UCLASS()
class DONKEYKONG_SIS457_API AObstaculoSierra : public AObstaculo
{
	GENERATED_BODY()

public:
	// Constructor
	AObstaculoSierra();

	// Sobrescribir el método polimórfico para mostrar mensaje
	virtual void MostrarMensaje() override;
};
