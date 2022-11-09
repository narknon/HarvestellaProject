#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTDecorator_CharacterDistanceConditions.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTDecorator_CharacterDistanceConditions : uint8 {
    GreaterThan,
    LessThan,
    GreaterThanOrEqual,
    LessThanOrEqual,
    EShinsenBTDecorator_MAX UMETA(Hidden),
};

