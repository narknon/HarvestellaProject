#pragma once
#include "CoreMinimal.h"
#include "ESeason.generated.h"

UENUM(BlueprintType)
enum class ESeason : uint8 {
    SPRING,
    SUMMER,
    AUTUMN,
    WINTER,
    Max,
};

