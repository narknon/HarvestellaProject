#pragma once
#include "CoreMinimal.h"
#include "EQuestAddType.generated.h"

UENUM(BlueprintType)
enum class EQuestAddType : uint8 {
    ScenarioFlag,
    QuestID,
    QuestStepID,
    MemoID = 0x4,
    LetterID,
    Max = 0x5,
};

