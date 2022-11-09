#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShinsenBTTask_BattleRandomAttackExec.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_BattleRandomAttackExec : public UBTTaskNode {
    GENERATED_BODY()
public:
    UShinsenBTTask_BattleRandomAttackExec();
};

