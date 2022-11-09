#pragma once
#include "CoreMinimal.h"
#include "ECharacterAIAttackType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAIAttackType : uint8 {
    Attack,
    SkillU,
    SkillL,
    SkillB,
    SkillR,
    NUM,
};

