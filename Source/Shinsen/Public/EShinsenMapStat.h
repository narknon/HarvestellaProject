#pragma once
#include "CoreMinimal.h"
#include "EShinsenMapStat.generated.h"

UENUM(BlueprintType)
enum class EShinsenMapStat : uint8 {
    Init,
    WaitMapChange,
    BeginLoad,
    Invisible,
    WaitInvisible,
    Unload,
    WaitUnload,
    ChangeMap,
    LoadMainLevel,
    WaitLoadMainLevel,
    LoadSubLevel,
    WaitLoadSubLevel,
    Visible,
    WaitVisible,
    SetupMap,
    EndLoad,
    WaitTextureLoad,
    BeginMap,
    WaitBeginFade,
};

