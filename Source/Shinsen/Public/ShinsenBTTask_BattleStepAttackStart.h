#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShinsenBTTask_BattleStepAttackStart.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_BattleStepAttackStart : public UBTTaskNode {
    GENERATED_BODY()
public:
    UShinsenBTTask_BattleStepAttackStart();
};

