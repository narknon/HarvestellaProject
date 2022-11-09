#pragma once
#include "CoreMinimal.h"
#include "ShinsenBTService_DeadEnemyRespawnObserverEnemyInfo.generated.h"

USTRUCT(BlueprintType)
struct FShinsenBTService_DeadEnemyRespawnObserverEnemyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EnemyPositionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnTimerMax;
    
    SHINSEN_API FShinsenBTService_DeadEnemyRespawnObserverEnemyInfo();
};

