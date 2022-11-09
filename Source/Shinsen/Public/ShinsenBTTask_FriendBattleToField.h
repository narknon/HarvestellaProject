#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShinsenBTTask_FriendBattleToField.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_FriendBattleToField : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerToEnemyDistanceForEndBattleMode;
    
    UShinsenBTTask_FriendBattleToField();
};

