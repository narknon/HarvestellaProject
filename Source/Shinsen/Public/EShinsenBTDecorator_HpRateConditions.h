#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTDecorator_HpRateConditions.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTDecorator_HpRateConditions : uint8 {
    GreaterThan,
    LessThan,
    GreaterThanOrEqual,
    LessThanOrEqual,
    EShinsenBTDecorator_MAX UMETA(Hidden),
};

