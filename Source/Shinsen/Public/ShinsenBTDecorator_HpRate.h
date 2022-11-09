#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EShinsenBTDecorator_HpRateConditions.h"
#include "ShinsenBTDecorator_HpRate.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTDecorator_HpRate : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenBTDecorator_HpRateConditions Conditions;
    
    UShinsenBTDecorator_HpRate();
};

