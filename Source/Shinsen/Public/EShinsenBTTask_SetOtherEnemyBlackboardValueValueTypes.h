#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTTask_SetOtherEnemyBlackboardValueValueTypes.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTTask_SetOtherEnemyBlackboardValueValueTypes : uint8 {
    S32,
    F32,
    Bool,
    EShinsenBTTask_MAX UMETA(Hidden),
};

