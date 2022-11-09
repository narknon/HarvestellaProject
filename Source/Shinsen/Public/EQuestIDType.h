#pragma once
#include "CoreMinimal.h"
#include "EQuestIDType.generated.h"

UENUM(BlueprintType)
enum class EQuestIDType : uint8 {
    None,
    Story,
    Chara,
    Quest,
    Memo,
    Max = 0x4,
};

