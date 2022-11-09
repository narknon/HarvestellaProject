#pragma once
#include "CoreMinimal.h"
#include "ERecipeStatus.generated.h"

UENUM(BlueprintType)
enum class ERecipeStatus : uint8 {
    None,
    Get,
    Make,
    Complete,
    Max = 0x3,
};

