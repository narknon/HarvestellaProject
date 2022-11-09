#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ECharacterAIAttackTargetType.h"
#include "ShinsenBTTask_BattleAttackTarget.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_BattleAttackTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAIAttackTargetType TargetType;
    
    UShinsenBTTask_BattleAttackTarget();
};

