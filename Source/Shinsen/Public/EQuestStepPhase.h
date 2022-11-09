#pragma once
#include "CoreMinimal.h"
#include "EQuestStepPhase.generated.h"

UENUM(BlueprintType)
enum class EQuestStepPhase : uint8 {
    None,
    Order,
    Ongoing,
    Complete,
    Max = 0x3,
};

