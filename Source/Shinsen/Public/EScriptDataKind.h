#pragma once
#include "CoreMinimal.h"
#include "EScriptDataKind.generated.h"

UENUM(BlueprintType)
enum class EScriptDataKind : uint8 {
    AnimSequence,
    AnimMontage,
    EffectCascade,
    EffectNiagara,
    Material,
    MaterialInstance,
    Count,
};

