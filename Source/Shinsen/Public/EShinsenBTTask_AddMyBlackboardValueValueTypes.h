#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTTask_AddMyBlackboardValueValueTypes.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTTask_AddMyBlackboardValueValueTypes : uint8 {
    S32,
    F32,
    EShinsenBTTask_MAX UMETA(Hidden),
};

