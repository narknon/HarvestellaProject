#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShinsenBTTask_DynamicResMinScreenPercentage.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_DynamicResMinScreenPercentage : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercentValue;
    
    UShinsenBTTask_DynamicResMinScreenPercentage();
};

