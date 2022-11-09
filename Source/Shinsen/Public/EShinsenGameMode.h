#pragma once
#include "CoreMinimal.h"
#include "EShinsenGameMode.generated.h"

UENUM(BlueprintType)
enum class EShinsenGameMode : uint8 {
    INIT,
    TITLE,
    GAME,
    WORLDMAP,
};

