#pragma once
#include "CoreMinimal.h"
#include "EShinsenAnimNotify_PlayEffectNiagaraForTargetSpawnLocationBase.generated.h"

UENUM(BlueprintType)
enum class EShinsenAnimNotify_PlayEffectNiagaraForTargetSpawnLocationBase : uint8 {
    Target,
    TargetGround,
    EShinsenAnimNotify_MAX UMETA(Hidden),
};

