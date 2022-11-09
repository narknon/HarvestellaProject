#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ShinsenAnimNotifyState_JobB10Skill04.generated.h"

class AShinsenJobB10Skill04Fairy;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SHINSEN_API UShinsenAnimNotifyState_JobB10Skill04 : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AShinsenJobB10Skill04Fairy> JobB10Skill04Fairy;
    
    UShinsenAnimNotifyState_JobB10Skill04();
};

