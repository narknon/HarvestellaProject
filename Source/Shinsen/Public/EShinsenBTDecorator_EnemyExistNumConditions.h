#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTDecorator_EnemyExistNumConditions.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTDecorator_EnemyExistNumConditions : uint8 {
    GreaterThan,
    LessThan,
    GreaterThanOrEqual,
    LessThanOrEqual,
    EShinsenBTDecorator_MAX UMETA(Hidden),
};

