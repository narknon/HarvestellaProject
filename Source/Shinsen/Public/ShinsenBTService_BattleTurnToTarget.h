#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "ShinsenBTService_BattleTurnToTarget.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTService_BattleTurnToTarget : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationRate;
    
    UShinsenBTService_BattleTurnToTarget();
};

