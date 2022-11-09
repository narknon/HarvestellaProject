#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ECharacterArmorLevel.h"
#include "ShinsenBTTask_ArmorLevel.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_ArmorLevel : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterArmorLevel ArmorLevel;
    
    UShinsenBTTask_ArmorLevel();
};

