#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstaculo.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AObstaculo : public AActor
{
	GENERATED_BODY()

public:
	// Establece los valores predeterminados para las propiedades de este actor
	AObstaculo();

protected:
	// Llamado cuando el juego comienza o cuando se genera
	virtual void BeginPlay() override;

public:
	// Llamado cada cuadro
	virtual void Tick(float DeltaTime) override;

private:
	// Propiedades encapsuladas
	FString Nombre;
	float Velocidad;
	float Danio;

public:
	// Métodos accesores (Getters y Setters)

	// Getter para Nombre
	FString GetNombre() const { return Nombre; }

	// Setter para Nombre
	void SetNombre(FString NewNombre) { Nombre = NewNombre; }

	// Getter para Velocidad
	float GetVelocidad() const { return Velocidad; }

	// Setter para Velocidad
	void SetVelocidad(float NewVelocidad) { Velocidad = NewVelocidad; }

	// Getter para Danio
	float GetDanio() const { return Danio; }

	// Setter para Danio
	void SetDanio(float NewDanio) { Danio = NewDanio; }

	// Método polimórfico para mostrar mensaje
	virtual void MostrarMensaje();
};