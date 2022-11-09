#pragma once
#include "CoreMinimal.h"
#include "EKarenoidWellType.generated.h"

UENUM(BlueprintType)
enum class EKarenoidWellType : uint8 {
    Init,
    NextFloor,
    Item,
    Enemy,
};

