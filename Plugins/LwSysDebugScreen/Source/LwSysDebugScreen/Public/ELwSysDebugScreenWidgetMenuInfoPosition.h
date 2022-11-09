#pragma once
#include "CoreMinimal.h"
#include "ELwSysDebugScreenWidgetMenuInfoPosition.generated.h"

UENUM(BlueprintType)
enum class ELwSysDebugScreenWidgetMenuInfoPosition : uint8 {
    LT,
    LB,
    RT,
    RB,
    CT,
    CB,
};

