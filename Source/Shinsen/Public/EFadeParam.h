#pragma once
#include "CoreMinimal.h"
#include "EFadeParam.generated.h"

UENUM(BlueprintType)
enum class EFadeParam : uint8 {
    FadeIn,
    FadeOut,
    Stay,
    Count,
};

