#pragma once
#include "CoreMinimal.h"
#include "EFarmTargetMode.generated.h"

UENUM(BlueprintType)
enum class EFarmTargetMode : uint8 {
    Normal,
    Wide,
    Charge1,
    Charge2,
    Round1,
    Round2,
    Max,
};

