#pragma once
#include "CoreMinimal.h"
#include "EShopUICategory.generated.h"

UENUM(BlueprintType)
enum class EShopUICategory : uint8 {
    All,
    Seed,
    Recipe,
    Accessory,
    Others,
    Max = 0x3,
};

