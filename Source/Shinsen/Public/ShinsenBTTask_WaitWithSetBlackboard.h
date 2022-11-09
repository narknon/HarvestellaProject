#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ShinsenBTTask_WaitWithSetBlackboard.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_WaitWithSetBlackboard : public UBTTask_Wait {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector SetBlackboard;
    
    UShinsenBTTask_WaitWithSetBlackboard();
};

