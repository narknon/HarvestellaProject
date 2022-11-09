#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTComposite_SequenceWithBreakByBlackboardConditionsConditions.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTComposite_SequenceWithBreakByBlackboardConditionsConditions : uint8 {
    GreaterThan,
    LessThan,
    GreaterThanOrEqual,
    LessThanOrEqual,
    Equal,
    EShinsenBTComposite_MAX UMETA(Hidden),
};

