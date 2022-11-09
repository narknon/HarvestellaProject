#pragma once
#include "CoreMinimal.h"
#include "Engine/DPICustomScalingRule.h"
#include "ShinsenDPICustomScalingRule.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenDPICustomScalingRule : public UDPICustomScalingRule {
    GENERATED_BODY()
public:
    UShinsenDPICustomScalingRule();
};

