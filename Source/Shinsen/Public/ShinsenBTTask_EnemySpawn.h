#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShinsenBTTask_EnemySpawn.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_EnemySpawn : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EnemyPositionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReturnSuccessExistAlready;
    
    UShinsenBTTask_EnemySpawn();
};

