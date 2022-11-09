#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShinsenInterface_MapObject.h"
#include "ShinsenEventObject.generated.h"

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenEventObject : public AActor, public IShinsenInterface_MapObject {
    GENERATED_BODY()
public:
    AShinsenEventObject();
    
    // Fix for true pure virtual functions not being implemented
};

