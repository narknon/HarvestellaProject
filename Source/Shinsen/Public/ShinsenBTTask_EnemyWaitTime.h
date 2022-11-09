#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShinsenBTTask_EnemyWaitTime.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_EnemyWaitTime : public UBTTaskNode {
    GENERATED_BODY()
public:
    UShinsenBTTask_EnemyWaitTime();
};

