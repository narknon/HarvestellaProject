#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTDecorator_CharacterExistNumWithDistanceConditions.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTDecorator_CharacterExistNumWithDistanceConditions : uint8 {
    GreaterThan,
    LessThan,
    GreaterThanOrEqual,
    LessThanOrEqual,
    EShinsenBTDecorator_MAX UMETA(Hidden),
};

