#pragma once
#include "CoreMinimal.h"
#include "EShinsenAnimNotify_PlayEffectParticleForTargetSpawnLocationBase.generated.h"

UENUM(BlueprintType)
enum class EShinsenAnimNotify_PlayEffectParticleForTargetSpawnLocationBase : uint8 {
    Target,
    TargetGround,
    EShinsenAnimNotify_MAX UMETA(Hidden),
};

