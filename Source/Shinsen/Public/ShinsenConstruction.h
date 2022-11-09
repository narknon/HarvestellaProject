#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShinsenInterface_Construction.h"
#include "ShinsenConstruction.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API AShinsenConstruction : public AActor, public IShinsenInterface_Construction {
    GENERATED_BODY()
public:
    AShinsenConstruction();
    
    // Fix for true pure virtual functions not being implemented
};

