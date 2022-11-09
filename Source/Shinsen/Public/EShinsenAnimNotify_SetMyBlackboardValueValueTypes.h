#pragma once
#include "CoreMinimal.h"
#include "EShinsenAnimNotify_SetMyBlackboardValueValueTypes.generated.h"

UENUM(BlueprintType)
enum class EShinsenAnimNotify_SetMyBlackboardValueValueTypes : uint8 {
    S32,
    F32,
    Bool,
    Vector,
    EShinsenAnimNotify_MAX UMETA(Hidden),
};

