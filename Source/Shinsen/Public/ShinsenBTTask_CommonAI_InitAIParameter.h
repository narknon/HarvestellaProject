#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShinsenBTTask_CommonAI_InitAIParameter.generated.h"

class UShinsenDataTable_CharacterAIParameters;

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_CommonAI_InitAIParameter : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UShinsenDataTable_CharacterAIParameters* DataTable;
    
public:
    UShinsenBTTask_CommonAI_InitAIParameter();
};

