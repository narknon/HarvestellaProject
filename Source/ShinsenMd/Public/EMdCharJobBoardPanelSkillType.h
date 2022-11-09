#pragma once
#include "CoreMinimal.h"
#include "EMdCharJobBoardPanelSkillType.generated.h"

UENUM(BlueprintType)
enum class EMdCharJobBoardPanelSkillType : uint8 {
    Attack,
    SkillU,
    SkillL,
    SkillB,
    SkillR,
    Special,
    NUM,
};

