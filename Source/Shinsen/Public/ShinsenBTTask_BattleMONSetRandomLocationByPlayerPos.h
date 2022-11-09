#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShinsenBTTask_BattleMONSetRandomLocationByPlayerPosLocationInfo.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenBTTask_BattleMONSetRandomLocationByPlayerPos.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_BattleMONSetRandomLocationByPlayerPos : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTaskFailedWhenNotDecideLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenBTTask_BattleMONSetRandomLocationByPlayerPosLocationInfo> LocationInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FVector, float> InvalidLocation_Radiuses;
    
    UShinsenBTTask_BattleMONSetRandomLocationByPlayerPos();
};

