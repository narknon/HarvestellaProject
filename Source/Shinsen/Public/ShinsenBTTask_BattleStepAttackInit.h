#pragma once
#include "CoreMinimal.h"
#include "ShinsenCharacterAIStepAttack.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShinsenBTTask_BattleStepAttackInit.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_BattleStepAttackInit : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenCharacterAIStepAttack> StepAttacks;
    
    UShinsenBTTask_BattleStepAttackInit();
};

