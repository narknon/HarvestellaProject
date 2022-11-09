#pragma once
#include "CoreMinimal.h"
#include "EFarmFieldType.generated.h"

UENUM(BlueprintType)
enum class EFarmFieldType : uint8 {
    UNDEVELOPED,
    PLAIN,
    PLOW1,
    PLOW2,
    ARABLE,
    Max,
};

