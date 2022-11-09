#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShinsenCharacterAIAttackType.h"
#include "ShinsenBTTask_BattleRandomAttackStartAndExec.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_BattleRandomAttackStartAndExec : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenCharacterAIAttackType> AttackTypes;
    
    UShinsenBTTask_BattleRandomAttackStartAndExec();
};

