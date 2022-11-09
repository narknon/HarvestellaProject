#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "ShinsenBTService_EnemySensingInterval.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTService_EnemySensingInterval : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistFar;
    
    UShinsenBTService_EnemySensingInterval();
};

