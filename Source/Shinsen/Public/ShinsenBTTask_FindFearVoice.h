#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShinsenBTTask_FindFearVoice.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_FindFearVoice : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchRadius;
    
    UShinsenBTTask_FindFearVoice();
};

