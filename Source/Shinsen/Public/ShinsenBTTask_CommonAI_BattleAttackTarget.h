#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ECharacterAIAttackTargetType.h"
#include "ShinsenBTTask_CommonAI_BattleAttackTarget.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_CommonAI_BattleAttackTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerceptionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAIAttackTargetType FrindOfTargetType;
    
public:
    UShinsenBTTask_CommonAI_BattleAttackTarget();
};

