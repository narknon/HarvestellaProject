#pragma once
#include "CoreMinimal.h"
#include "ECharacterHitAttribute.generated.h"

UENUM(BlueprintType)
enum class ECharacterHitAttribute : uint8 {
    None,
    ZanS,
    ZanL,
    GekiS,
    GekiL,
    SaiS,
    SaiL,
    HaS,
    HaL,
    NUM,
};

