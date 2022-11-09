#pragma once
#include "CoreMinimal.h"
#include "EWidgetActionKeyEvent.generated.h"

UENUM(BlueprintType)
enum class EWidgetActionKeyEvent : uint8 {
    MenuPause,
    MenuDecide,
    MenuCancel,
    MenuX,
    MenuY,
    MenuLB,
    MenuLT,
    MenuRB,
    MenuRT,
    MenuSpecialLeft,
};

