#pragma once
#include "CoreMinimal.h"
#include "EShopItemType.generated.h"

UENUM(BlueprintType)
enum class EShopItemType : uint8 {
    Item,
    Accessory,
    Max = 0x1,
};

