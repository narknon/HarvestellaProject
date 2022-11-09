#pragma once
#include "CoreMinimal.h"
#include "EFarmKind.generated.h"

UENUM(BlueprintType)
enum class EFarmKind : uint8 {
    Normal,
    Water,
    Cave,
    Max,
};

