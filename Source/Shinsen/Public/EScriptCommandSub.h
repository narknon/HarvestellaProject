#pragma once
#include "CoreMinimal.h"
#include "EScriptCommandSub.generated.h"

UENUM(BlueprintType)
enum class EScriptCommandSub : uint8 {
    None,
    Visibility,
    Position,
    Move,
    Quake,
    Remove,
    Pause,
    End,
    Start,
    Wait,
    In,
    Out,
    Default,
    All,
    Resume,
    Sequence,
    Overwrite,
    Attach,
    Height,
    CameraAttach,
    ByTick,
    Count,
};

