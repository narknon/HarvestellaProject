#pragma once
#include "CoreMinimal.h"
#include "EShinsenCameraShakeType.generated.h"

UENUM(BlueprintType)
enum class EShinsenCameraShakeType : uint8 {
    Extra,
    PlayerAnimMontage,
    EnemyAnimMontage,
    HitDamage,
    Event,
    Max,
};

