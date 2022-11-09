#pragma once
#include "CoreMinimal.h"
#include "EShinsenAnimNotifyState_LookToRotationTarget.generated.h"

UENUM(BlueprintType)
enum class EShinsenAnimNotifyState_LookToRotationTarget : uint8 {
    BlackboradTarget,
    Player,
    EShinsenAnimNotifyState_MAX UMETA(Hidden),
};

