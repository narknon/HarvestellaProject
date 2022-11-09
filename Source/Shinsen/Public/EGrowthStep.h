#pragma once
#include "CoreMinimal.h"
#include "EGrowthStep.generated.h"

UENUM(BlueprintType)
enum class EGrowthStep : uint8 {
    SEED,
    SPROUT,
    LEAF,
    FRUIT,
    REPEAT,
    Max,
};

