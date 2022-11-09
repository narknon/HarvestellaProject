#pragma once
#include "CoreMinimal.h"
#include "EShinsenShinsenBTDecorator_MyBlackboardMultiConditionsConditions.generated.h"

UENUM(BlueprintType)
enum class EShinsenShinsenBTDecorator_MyBlackboardMultiConditionsConditions : uint8 {
    GreaterThan,
    LessThan,
    GreaterThanOrEqual,
    LessThanOrEqual,
    Equal,
    EShinsenShinsenBTDecorator_MAX UMETA(Hidden),
};

