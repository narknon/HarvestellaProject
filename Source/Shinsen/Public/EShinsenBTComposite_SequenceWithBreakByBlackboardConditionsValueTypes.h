#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTComposite_SequenceWithBreakByBlackboardConditionsValueTypes.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTComposite_SequenceWithBreakByBlackboardConditionsValueTypes : uint8 {
    S32,
    F32,
    Bool,
    EShinsenBTComposite_MAX UMETA(Hidden),
};

