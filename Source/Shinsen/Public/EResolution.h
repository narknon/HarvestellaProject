#pragma once
#include "CoreMinimal.h"
#include "EResolution.generated.h"

UENUM(BlueprintType)
enum class EResolution : uint8 {
    Size1280x720,
    Size1920x1080,
    Size2560x1440,
    Size3840x2160,
};

