// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoLaser.generated.h"

/**
 *
 */
UCLASS()
class DONKEYKONG_SIS457_API AObstaculoLaser : public AObstaculo
{
	GENERATED_BODY()
public:
	// Constructor
	AObstaculoLaser();

	// Override the polymorphic function
	virtual void MostrarMensaje() override;
};