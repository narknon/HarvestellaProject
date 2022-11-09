#pragma once
#include "CoreMinimal.h"
#include "EShinsenPlayerStatus.generated.h"

UENUM(BlueprintType)
enum class EShinsenPlayerStatus : uint8 {
    INIT,
    TITLE,
    STARTGAME,
    GAME,
    ENDGAME,
    Max,
};

