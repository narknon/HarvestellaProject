#pragma once
#include "CoreMinimal.h"
#include "ECharacterPhysicalSurfaceType.generated.h"

UENUM(BlueprintType)
enum class ECharacterPhysicalSurfaceType : uint8 {
    Default,
    Farm,
    Dirt,
    Grass,
    Wood,
    Metal,
    Stone,
    Water,
    Sand,
    Snow,
    Ice,
    Flower,
    Temple,
    Crystal,
    Damage,
    DamageBlue,
    Galaxy,
    NUM,
};

