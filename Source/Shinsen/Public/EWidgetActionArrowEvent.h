#pragma once
#include "CoreMinimal.h"
#include "EWidgetActionArrowEvent.generated.h"

UENUM(BlueprintType)
enum class EWidgetActionArrowEvent : uint8 {
    MenuUp,
    MenuDown,
    MenuLeft,
    MenuRight,
};

