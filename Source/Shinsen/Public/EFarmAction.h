#pragma once
#include "CoreMinimal.h"
#include "EFarmAction.generated.h"

UENUM(BlueprintType)
enum class EFarmAction : uint8 {
    PLOW,
    SPRINKLE,
    SOW,
    HARVEST,
    DESTRUCT,
    PLACING,
    Max,
};

