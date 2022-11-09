#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShinsenBTTask_CommonAI_BattleShuttleRun.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_CommonAI_BattleShuttleRun : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AspectRadius;
    
public:
    UShinsenBTTask_CommonAI_BattleShuttleRun();
};

