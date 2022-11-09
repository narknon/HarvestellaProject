#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EShinsenShinsenBTDecorator_MyBlackboardMultiConditionsLogicalOperatorTypes.h"
#include "ShinsenShinsenBTDecorator_MyBlackboardMultiConditionsBlackboardInfo.h"
#include "ShinsenBTDecorator_MyBlackboardMultiConditions.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTDecorator_MyBlackboardMultiConditions : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenShinsenBTDecorator_MyBlackboardMultiConditionsLogicalOperatorTypes OperatorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenShinsenBTDecorator_MyBlackboardMultiConditionsBlackboardInfo> BlackboardInfos;
    
    UShinsenBTDecorator_MyBlackboardMultiConditions();
};

