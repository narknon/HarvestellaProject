#pragma once
#include "CoreMinimal.h"
#include "ECharacterLandType.generated.h"

UENUM(BlueprintType)
enum class ECharacterLandType : uint8 {
    Walk,
    Run,
    JumpStart,
    LandingFoot,
    LandingBody,
    NUM,
};

