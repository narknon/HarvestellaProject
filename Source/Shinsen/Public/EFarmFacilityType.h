#pragma once
#include "CoreMinimal.h"
#include "EFarmFacilityType.generated.h"

UENUM(BlueprintType)
enum class EFarmFacilityType : uint8 {
    None,
    Processor,
    Sprinkler,
    Fence,
    Rock,
    Max,
};

