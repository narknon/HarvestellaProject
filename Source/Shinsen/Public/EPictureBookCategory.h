#pragma once
#include "CoreMinimal.h"
#include "EPictureBookCategory.generated.h"

UENUM(BlueprintType)
enum class EPictureBookCategory : uint8 {
    None,
    Ingredient,
    Seed,
    Craft,
    Dish,
    Item,
    Fish,
    Mob,
    Fear,
    Boss,
    Max,
};

