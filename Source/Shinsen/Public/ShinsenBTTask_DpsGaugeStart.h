#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShinsenBTTask_DpsGaugeStart.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_DpsGaugeStart : public UBTTaskNode {
    GENERATED_BODY()
public:
    UShinsenBTTask_DpsGaugeStart();
};

