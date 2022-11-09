#pragma once
#include "CoreMinimal.h"
#include "EMessageMode.generated.h"

UENUM(BlueprintType)
enum class EMessageMode : uint8 {
    Message,
    System,
    Subtitle,
    Question,
    Caption,
    Log,
    Count,
};

