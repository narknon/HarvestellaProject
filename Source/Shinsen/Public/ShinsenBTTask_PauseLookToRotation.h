#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShinsenBTTask_PauseLookToRotation.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_PauseLookToRotation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UShinsenBTTask_PauseLookToRotation();
};

