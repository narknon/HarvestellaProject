#pragma once
#include "CoreMinimal.h"
#include "EFarmActionStaminaLevel.generated.h"

UENUM(BlueprintType)
enum class EFarmActionStaminaLevel : uint8 {
    PLOW,
    SPRINKLE,
    SOW,
    DESTRUCT,
    Max,
};

