#pragma once
#include "CoreMinimal.h"
#include "EFpsLimit.generated.h"

UENUM(BlueprintType)
enum class EFpsLimit : uint8 {
    Limit30,
    Limit60,
    Limit120,
};

