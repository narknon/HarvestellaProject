#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTTask_WaitByBlackboardConditionValueTypes.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTTask_WaitByBlackboardConditionValueTypes : uint8 {
    S32,
    F32,
    Bool,
    EShinsenBTTask_MAX UMETA(Hidden),
};

