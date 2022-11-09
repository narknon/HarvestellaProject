#pragma once
#include "CoreMinimal.h"
#include "EElevatorMoveMode.generated.h"

UENUM(BlueprintType)
enum class EElevatorMoveMode : uint8 {
    UpStart,
    UpLoop,
    UpOut,
    UpEnd,
    DownStart,
    DownLoop,
    DownOut,
    DownEnd,
    Open,
};

