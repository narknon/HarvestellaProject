#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShinsenBTTask_EnemyWanderLocationAndRadiusPointInfo.h"
#include "ShinsenBTTask_EnemyWanderLocationAndRadius.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_EnemyWanderLocationAndRadius : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenBTTask_EnemyWanderLocationAndRadiusPointInfo> PointInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveSkipNotDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveStartSkipMaxDistanceFactor;
    
    UShinsenBTTask_EnemyWanderLocationAndRadius();
};

