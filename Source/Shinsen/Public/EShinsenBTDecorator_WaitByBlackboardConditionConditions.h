#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTDecorator_WaitByBlackboardConditionConditions.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTDecorator_WaitByBlackboardConditionConditions : uint8 {
    GreaterThan,
    LessThan,
    GreaterThanOrEqual,
    LessThanOrEqual,
    Equal,
    EShinsenBTDecorator_MAX UMETA(Hidden),
};

