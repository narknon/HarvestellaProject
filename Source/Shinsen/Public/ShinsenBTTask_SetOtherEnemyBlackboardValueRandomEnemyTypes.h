#pragma once
#include "CoreMinimal.h"
#include "ShinsenBTTask_SetOtherEnemyBlackboardValueRandomEnemyTypes.generated.h"

UENUM(BlueprintType)
enum class ShinsenBTTask_SetOtherEnemyBlackboardValueRandomEnemyTypes : uint8 {
    CharID,
    EnemyPositionID,
    ShinsenBTTask_MAX UMETA(Hidden),
};

