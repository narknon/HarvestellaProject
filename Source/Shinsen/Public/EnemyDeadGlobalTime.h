#pragma once
#include "CoreMinimal.h"
#include "EnemyDeadGlobalTime.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FEnemyDeadGlobalTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GlobalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RespawnDay;
    
    FEnemyDeadGlobalTime();
};

