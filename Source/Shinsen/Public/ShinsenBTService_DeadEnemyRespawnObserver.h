#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "ShinsenBTService_DeadEnemyRespawnObserverEnemyInfo.h"
#include "ShinsenBTService_DeadEnemyRespawnObserver.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTService_DeadEnemyRespawnObserver : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenBTService_DeadEnemyRespawnObserverEnemyInfo> EnemyInfos;
    
    UShinsenBTService_DeadEnemyRespawnObserver();
};

