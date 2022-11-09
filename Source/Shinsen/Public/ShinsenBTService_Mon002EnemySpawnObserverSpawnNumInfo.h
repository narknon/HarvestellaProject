#pragma once
#include "CoreMinimal.h"
#include "ShinsenBTService_Mon002EnemySpawnObserverSpawnNumInfo.generated.h"

USTRUCT(BlueprintType)
struct FShinsenBTService_Mon002EnemySpawnObserverSpawnNumInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InFieldSpawnNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutFieldSpawnNum;
    
    SHINSEN_API FShinsenBTService_Mon002EnemySpawnObserverSpawnNumInfo();
};

