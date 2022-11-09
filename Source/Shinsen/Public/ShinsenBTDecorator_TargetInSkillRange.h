#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ShinsenBTDecorator_TargetInSkillRange.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTDecorator_TargetInSkillRange : public UBTDecorator {
    GENERATED_BODY()
public:
    UShinsenBTDecorator_TargetInSkillRange();
};

