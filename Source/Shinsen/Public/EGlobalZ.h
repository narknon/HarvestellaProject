#pragma once
#include "CoreMinimal.h"
#include "EGlobalZ.generated.h"

UENUM(BlueprintType)
enum class EGlobalZ : uint8 {
    Zero,
    Field3dGauge = 0xA,
    Field3dGaugeTarget,
    FieldActionInfo = 0x14,
    FieldBreak = 0x5A,
    FieldClock = 0x64,
    FieldMiniMap,
    FieldGauge,
    FieldButton,
    FieldItemSelect,
    FieldAreaName,
    FieldQuestGuide,
    FishingResult,
    UNDER_FADE = 0xC7,
    FADE,
    EventSkip,
    PauseMenu,
    Option,
    SaveLoad,
    Max,
};

