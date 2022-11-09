#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenBTTask_EnemyWanderLocationAndRadiusPointInfo.generated.h"

USTRUCT(BlueprintType)
struct FShinsenBTTask_EnemyWanderLocationAndRadiusPointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CenterLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    SHINSEN_API FShinsenBTTask_EnemyWanderLocationAndRadiusPointInfo();
};

