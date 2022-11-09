#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ShinsenBTDecorator_MoveEnabled.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTDecorator_MoveEnabled : public UBTDecorator {
    GENERATED_BODY()
public:
    UShinsenBTDecorator_MoveEnabled();
};

