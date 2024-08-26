// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoHielo.generated.h"

/**
 *
 */
UCLASS()
class DONKEYKONG_SIS457_API AObstaculoHielo : public AObstaculo
{
	GENERATED_BODY()
public:
	// Constructor
	AObstaculoHielo();

	// Sobrescribir el método polimórfico para mostrar mensaje
	virtual void MostrarMensaje() override;
};