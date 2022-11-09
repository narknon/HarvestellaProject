#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ShinsenBTDecorator_DpsGaugeActive.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTDecorator_DpsGaugeActive : public UBTDecorator {
    GENERATED_BODY()
public:
    UShinsenBTDecorator_DpsGaugeActive();
};

