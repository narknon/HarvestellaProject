#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTTask_LookToRotationTarget.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTTask_LookToRotationTarget : uint8 {
    BlackboradTarget,
    Player,
    EShinsenBTTask_MAX UMETA(Hidden),
};

