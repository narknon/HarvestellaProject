#pragma once
#include "CoreMinimal.h"
#include "EScriptType.generated.h"

UENUM(BlueprintType)
enum class EScriptType : uint8 {
    Talk,
    Present,
    Init,
    InitAfterFade,
    End,
    Max,
};

