#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EShinsenBTTask_WaitByBlackboardConditionValueTypes.h"
#include "EShinsenBTDecorator_WaitByBlackboardConditionConditions.h"
#include "ShinsenBTTask_WaitByBlackboardCondition.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_WaitByBlackboardCondition : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenBTTask_WaitByBlackboardConditionValueTypes ValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValueS32;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueF32;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ValueBool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenBTDecorator_WaitByBlackboardConditionConditions Conditions;
    
    UShinsenBTTask_WaitByBlackboardCondition();
};

