#pragma once
#include "CoreMinimal.h"
#include "EShinsenAnimNotify_RemoveStatusEffectTarget.generated.h"

UENUM(BlueprintType)
enum class EShinsenAnimNotify_RemoveStatusEffectTarget : uint8 {
    Me,
    PlayerSide,
    EnemySide,
    EShinsenAnimNotify_MAX UMETA(Hidden),
};

