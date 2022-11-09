#pragma once
#include "CoreMinimal.h"
#include "ShinsenBTService_Mon002EnemySpawnObserverSpawnNumInfo.h"
#include "ShinsenBTService_Mon002EnemySpawnObserverTimerSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FShinsenBTService_Mon002EnemySpawnObserverTimerSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenBTService_Mon002EnemySpawnObserverSpawnNumInfo SpawnNumInfo;
    
    SHINSEN_API FShinsenBTService_Mon002EnemySpawnObserverTimerSpawnInfo();
};

