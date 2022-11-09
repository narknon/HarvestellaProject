#pragma once
#include "CoreMinimal.h"
#include "ENpcAiState.generated.h"

UENUM(BlueprintType)
enum class ENpcAiState : uint8 {
    NONE,
    STAY,
    WANDERING,
    PATROL,
    MOVETOPOINT,
    INTERVAL,
    SIT,
    CHANGEMAP,
    ERASE,
};

