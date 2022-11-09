#pragma once
#include "CoreMinimal.h"
#include "ELetterTriggerBit.generated.h"

UENUM(BlueprintType)
enum class ELetterTriggerBit : uint8 {
    None,
    ScenarioFlag,
    QuestStep,
    Achievement,
    Date,
    Max = 0x4,
};

