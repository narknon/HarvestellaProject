#pragma once
#include "CoreMinimal.h"
#include "EQuestStepFinishType.generated.h"

UENUM(BlueprintType)
enum class EQuestStepFinishType : uint8 {
    None,
    Days,
    EnemyDead,
    EnemyDeadAll,
    LetterRead,
    QuestStepComplete,
    Max = 0x5,
};

