// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DonkeyKong_SIS457GameMode.generated.h"

UCLASS(minimalapi)
class ADonkeyKong_SIS457GameMode : public AGameModeBase
{
	GENERATED_BODY()

public: // Accesible por cualquier clase
	ADonkeyKong_SIS457GameMode(); // Constructor

protected: // Accesible solo por esta clase y sus clases derivadas
	virtual void BeginPlay() override; // Se llama cuando el juego comienza

public: // Accesible solo por la clase que lo define
	virtual void Tick(float _tick) override; // Actualización constante del juego

	// Propiedades
	FString notas;
	float puntaje;
	int vidas;
	double danio;
	bool verificar;
};



