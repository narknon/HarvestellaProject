#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTTask_SetMyBlackboardValueRandomValueTypes.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTTask_SetMyBlackboardValueRandomValueTypes : uint8 {
    S32,
    F32,
    Bool,
    EShinsenBTTask_MAX UMETA(Hidden),
};

