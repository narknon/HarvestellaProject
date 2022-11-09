#pragma once
#include "CoreMinimal.h"
#include "EMapChangeBgm.generated.h"

UENUM(BlueprintType)
enum class EMapChangeBgm : uint8 {
    Normal,
    Continue,
    Select,
    Stop,
    Max,
};

