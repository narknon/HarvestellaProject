#pragma once
#include "CoreMinimal.h"
#include "EShinsenAnimNotify_SetMyBlackboardValueVectorValueTypes.generated.h"

UENUM(BlueprintType)
enum class EShinsenAnimNotify_SetMyBlackboardValueVectorValueTypes : uint8 {
    World,
    Self,
    EShinsenAnimNotify_MAX UMETA(Hidden),
};

