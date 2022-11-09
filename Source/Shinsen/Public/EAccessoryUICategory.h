#pragma once
#include "CoreMinimal.h"
#include "EAccessoryUICategory.generated.h"

UENUM(BlueprintType)
enum class EAccessoryUICategory : uint8 {
    All,
    AtkPhys,
    AtkMagic,
    DefPhys,
    DefMagic,
    Res,
    Etc,
    Max = 0x6,
};

