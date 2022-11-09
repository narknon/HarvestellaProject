#pragma once
#include "CoreMinimal.h"
#include "EMdCharJobBoardPanelType.generated.h"

UENUM(BlueprintType)
enum class EMdCharJobBoardPanelType : uint8 {
    None,
    LearningBattleSkill,
    LearningStatusEffect,
    EnhancementBattleSkillParameter,
    EnhancementBattleSkillCombo,
    LearningDodge,
    NUM,
};

