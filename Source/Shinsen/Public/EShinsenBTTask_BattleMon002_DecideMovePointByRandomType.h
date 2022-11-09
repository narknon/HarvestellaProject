#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTTask_BattleMon002_DecideMovePointByRandomType.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTTask_BattleMon002_DecideMovePointByRandomType : uint8 {
    Normal,
    OutRandom,
    InRandom,
    ExcludeNowField,
    Player,
    Skill03,
    Skill04,
    ReturnFromSkill03,
    Special,
    EShinsenBTTask_BattleMon002_MAX UMETA(Hidden),
};

