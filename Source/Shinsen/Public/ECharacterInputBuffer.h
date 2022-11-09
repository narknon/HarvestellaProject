#pragma once
#include "CoreMinimal.h"
#include "ECharacterInputBuffer.generated.h"

UENUM(BlueprintType)
enum class ECharacterInputBuffer : uint8 {
    None,
    Jump,
    Dodge,
    Item,
    Attack,
    SkillU,
    SkillL,
    SkillB,
    SkillR,
    JobU,
    JobL,
    JobB,
    JobR,
    Farm1,
    Farm2,
};

