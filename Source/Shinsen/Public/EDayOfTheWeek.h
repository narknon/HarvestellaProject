#pragma once
#include "CoreMinimal.h"
#include "EDayOfTheWeek.generated.h"

UENUM(BlueprintType)
enum class EDayOfTheWeek : uint8 {
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN,
    Max,
};

