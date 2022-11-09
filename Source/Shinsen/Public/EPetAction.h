#pragma once
#include "CoreMinimal.h"
#include "EPetAction.generated.h"

UENUM(BlueprintType)
enum class EPetAction : uint8 {
    INIT,
    RANDOM_WALK,
    DOWN,
    SLEEP,
    MOVE_POINT,
    Max,
};

