#pragma once
#include "CoreMinimal.h"
#include "ECharacterColorChangeType.generated.h"

UENUM(BlueprintType)
enum class ECharacterColorChangeType : uint8 {
    Fix,
    LinearOnce,
    LinearKeep,
    Curve,
};

