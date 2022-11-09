#pragma once
#include "CoreMinimal.h"
#include "ECharacterCollisionShape.generated.h"

UENUM(BlueprintType)
enum class ECharacterCollisionShape : uint8 {
    Sphere,
    Capsule,
};

