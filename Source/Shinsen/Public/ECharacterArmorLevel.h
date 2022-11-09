#pragma once
#include "CoreMinimal.h"
#include "ECharacterArmorLevel.generated.h"

UENUM(BlueprintType)
enum class ECharacterArmorLevel : uint8 {
    None,
    Low,
    High,
};

