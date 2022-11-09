#pragma once
#include "CoreMinimal.h"
#include "ECharacterSkillNotAvaliableReason.generated.h"

UENUM(BlueprintType)
enum class ECharacterSkillNotAvaliableReason : uint8 {
    Stun,
    Charm,
    Fear,
    Range,
    CoolTime,
    Stamina,
    Other,
};

