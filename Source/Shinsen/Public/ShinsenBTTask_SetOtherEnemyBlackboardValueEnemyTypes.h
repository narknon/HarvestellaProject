#pragma once
#include "CoreMinimal.h"
#include "ShinsenBTTask_SetOtherEnemyBlackboardValueEnemyTypes.generated.h"

UENUM(BlueprintType)
enum class ShinsenBTTask_SetOtherEnemyBlackboardValueEnemyTypes : uint8 {
    CharID,
    EnemyPositionID,
    ShinsenBTTask_MAX UMETA(Hidden),
};

