#pragma once
#include "CoreMinimal.h"
#include "EShinsenShinsenBTDecorator_MyBlackboardMultiConditionsLogicalOperatorTypes.generated.h"

UENUM(BlueprintType)
enum class EShinsenShinsenBTDecorator_MyBlackboardMultiConditionsLogicalOperatorTypes : uint8 {
    And,
    Or,
    EShinsenShinsenBTDecorator_MAX UMETA(Hidden),
};

