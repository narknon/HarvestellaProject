#pragma once
#include "CoreMinimal.h"
#include "EPictureBookEnemyInfoLevelStep.generated.h"

UENUM(BlueprintType)
enum class EPictureBookEnemyInfoLevelStep : uint8 {
    Unknown,
    Battle,
    Defeat,
    Max = 0x2,
};

