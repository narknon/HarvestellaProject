#pragma once
#include "CoreMinimal.h"
#include "ECharacterInputMode.generated.h"

UENUM(BlueprintType)
enum class ECharacterInputMode : uint8 {
    None,
    Default,
    ButtonShift,
    Item,
};

