#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShinsenBTTask_CommonAI_InitEnemyAIParameter.generated.h"

class UShinsenDataTable_EnemyAIParameters;

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_CommonAI_InitEnemyAIParameter : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UShinsenDataTable_EnemyAIParameters* DataTable;
    
public:
    UShinsenBTTask_CommonAI_InitEnemyAIParameter();
};

