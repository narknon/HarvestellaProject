#pragma once
#include "CoreMinimal.h"
#include "EAppWindowType.generated.h"

UENUM(BlueprintType)
enum class EAppWindowType : uint8 {
    Window,
    WindowNoTitle,
    FullScreen,
};

