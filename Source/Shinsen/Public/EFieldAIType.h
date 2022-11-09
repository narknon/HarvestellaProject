#pragma once
#include "CoreMinimal.h"
#include "EFieldAIType.generated.h"

UENUM(BlueprintType)
enum class EFieldAIType : uint8 {
    None,
    Stay,
    Wander,
    Patrol,
    Sit,
    NUM,
};

