#pragma once
#include "CoreMinimal.h"
#include "ECharacterDamageKind.generated.h"

UENUM(BlueprintType)
enum class ECharacterDamageKind : uint8 {
    None,
    Damage,
    Down,
    Blow,
    NUM,
};

