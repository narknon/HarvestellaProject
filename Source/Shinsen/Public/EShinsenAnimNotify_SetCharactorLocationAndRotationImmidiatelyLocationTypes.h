#pragma once
#include "CoreMinimal.h"
#include "EShinsenAnimNotify_SetCharactorLocationAndRotationImmidiatelyLocationTypes.generated.h"

UENUM(BlueprintType)
enum class EShinsenAnimNotify_SetCharactorLocationAndRotationImmidiatelyLocationTypes : uint8 {
    World,
    Blackboard,
    EShinsenAnimNotify_MAX UMETA(Hidden),
};

