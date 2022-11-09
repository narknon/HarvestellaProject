#pragma once
#include "CoreMinimal.h"
#include "ECharacterBaseEyeHeightOverrideType.generated.h"

UENUM(BlueprintType)
enum class ECharacterBaseEyeHeightOverrideType : uint8 {
    None,
    PlayerHeight,
    Value,
    NUM,
};

