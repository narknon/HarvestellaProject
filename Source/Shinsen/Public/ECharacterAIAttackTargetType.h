#pragma once
#include "CoreMinimal.h"
#include "ECharacterAIAttackTargetType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAIAttackTargetType : uint8 {
    Default,
    Player,
    Near,
    Random,
    Self,
    Party,
    Friend1,
    Friend2,
    NUM,
};

