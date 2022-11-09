#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTTask_SetOtherEnemyBlackboardValueRandomValueTypes.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTTask_SetOtherEnemyBlackboardValueRandomValueTypes : uint8 {
    S32,
    F32,
    Bool,
    EShinsenBTTask_MAX UMETA(Hidden),
};

