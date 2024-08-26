#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoHuracan.generated.h"

/**
 *
 */
UCLASS()
class DONKEYKONG_SIS457_API AObstaculoHuracan : public AObstaculo
{
    GENERATED_BODY()
public:
    // Constructor
    AObstaculoHuracan();

    // Override the polymorphic function
    virtual void MostrarMensaje() override;
};