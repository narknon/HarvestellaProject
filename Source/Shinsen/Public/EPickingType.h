#pragma once
#include "CoreMinimal.h"
#include "EPickingType.generated.h"

UENUM(BlueprintType)
enum class EPickingType : uint8 {
    None,
    Mining,
    Gathering,
    Fishing,
    Max = 0x3,
};

