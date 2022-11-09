#pragma once
#include "CoreMinimal.h"
#include "EShinsenEyeControl.generated.h"

UENUM(BlueprintType)
enum class EShinsenEyeControl : uint8 {
    Auto,
    ForceClose,
    ForceCloseNoWait,
    ForceOpen,
    ForceOpenNoWait,
    NUM,
};

