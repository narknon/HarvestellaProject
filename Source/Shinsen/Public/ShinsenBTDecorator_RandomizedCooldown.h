#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_Cooldown.h"
#include "ShinsenBTDecorator_RandomizedCooldown.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTDecorator_RandomizedCooldown : public UBTDecorator_Cooldown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownRandomTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownRandomTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoFirstRun;
    
    UShinsenBTDecorator_RandomizedCooldown();
};

