#pragma once
#include "CoreMinimal.h"
#include "EQuestGuideType.generated.h"

UENUM(BlueprintType)
enum class EQuestGuideType : uint8 {
    StoryStart,
    StoryEnd,
    QuestStart,
    QuestEnd,
    Order,
    Chara,
    Reward,
    CharaReward,
    Job,
};

