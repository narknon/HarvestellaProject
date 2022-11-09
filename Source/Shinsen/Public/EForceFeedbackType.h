#pragma once
#include "CoreMinimal.h"
#include "EForceFeedbackType.generated.h"

UENUM(BlueprintType)
enum class EForceFeedbackType : uint8 {
    LEVEL1,
    LEVEL2,
    LEVEL3,
    Max,
};

