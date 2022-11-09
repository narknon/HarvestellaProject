#pragma once
#include "CoreMinimal.h"
#include "EAntiAlias.generated.h"

UENUM(BlueprintType)
enum class EAntiAlias : uint8 {
    Off,
    FXAA,
    TAA,
};

