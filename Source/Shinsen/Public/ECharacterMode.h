#pragma once
#include "CoreMinimal.h"
#include "ECharacterMode.generated.h"

UENUM(BlueprintType)
enum class ECharacterMode : uint8 {
    Field,
    Battle,
    Farm,
};

