#pragma once
#include "CoreMinimal.h"
#include "EAchievementType.generated.h"

UENUM(BlueprintType)
enum class EAchievementType : uint8 {
    None,
    Craft,
    Cook,
    Shop,
    Ship,
    CropGrow,
};

