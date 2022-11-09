#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTDecorator_CheckOtherEnemyBlackboardValueEnemyTypes.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTDecorator_CheckOtherEnemyBlackboardValueEnemyTypes : uint8 {
    CharID,
    EnemyPositionID,
    EShinsenBTDecorator_MAX UMETA(Hidden),
};

