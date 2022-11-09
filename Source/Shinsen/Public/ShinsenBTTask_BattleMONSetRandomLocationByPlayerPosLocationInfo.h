#pragma once
#include "CoreMinimal.h"
#include "ShinsenBTTask_BattleMONSetRandomLocationByPlayerPosLocationInfo.generated.h"

USTRUCT(BlueprintType)
struct FShinsenBTTask_BattleMONSetRandomLocationByPlayerPosLocationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomDistanceMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomDistanceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomAngleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomAngleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveOKDistanceMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveOKDistanceMax;
    
    SHINSEN_API FShinsenBTTask_BattleMONSetRandomLocationByPlayerPosLocationInfo();
};

