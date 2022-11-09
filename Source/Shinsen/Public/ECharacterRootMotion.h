#pragma once
#include "CoreMinimal.h"
#include "ECharacterRootMotion.generated.h"

UENUM(BlueprintType)
enum class ECharacterRootMotion : uint8 {
    MoveStop,
    Turn,
    Attack,
    Dodge,
};

