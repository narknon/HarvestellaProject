#pragma once
#include "CoreMinimal.h"
#include "EShinsenAnimNotifyState_AttackInputPressing.generated.h"

UENUM(BlueprintType)
enum class EShinsenAnimNotifyState_AttackInputPressing : uint8 {
    Attack,
    SkillU,
    SkillL,
    SkillB,
    SkillR,
    EShinsenAnimNotifyState_MAX UMETA(Hidden),
};

