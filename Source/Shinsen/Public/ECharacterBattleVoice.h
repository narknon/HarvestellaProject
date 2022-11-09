#pragma once
#include "CoreMinimal.h"
#include "ECharacterBattleVoice.generated.h"

UENUM(BlueprintType)
enum class ECharacterBattleVoice : uint8 {
    None,
    EnemySkillAlarm,
    BreakAlmost,
    BreakSucceed,
    PlayerDying,
    Damaged,
    Dead,
    Rebirth,
    Encount,
    Pinch,
    Nice,
    BattleEndHpHigh,
    BattleEndHpMid,
    BattleEndHpLow,
    BattleEndEscape,
    UsedHealItem,
    FEARFound,
    FEARFoundHigh,
    FEARFoundLow,
    StaminaRunsOut,
    Max,
};

