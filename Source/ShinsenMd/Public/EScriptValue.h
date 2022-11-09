#pragma once
#include "CoreMinimal.h"
#include "EScriptValue.generated.h"

UENUM(BlueprintType)
enum class EScriptValue : uint8 {
    Normal,
    Gold,
    Map,
    Char,
    Item,
    Ability,
    Max,
};

