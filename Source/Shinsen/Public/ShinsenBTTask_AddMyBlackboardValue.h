#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EShinsenBTTask_AddMyBlackboardValueValueTypes.h"
#include "ShinsenBTTask_AddMyBlackboardValue.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_AddMyBlackboardValue : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenBTTask_AddMyBlackboardValueValueTypes ValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValueS32;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueF32;
    
    UShinsenBTTask_AddMyBlackboardValue();
};

