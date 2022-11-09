#pragma once
#include "CoreMinimal.h"
#include "ECharacterArmorLevel.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ShinsenAnimNotifyState_ArmorLevel.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SHINSEN_API UShinsenAnimNotifyState_ArmorLevel : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterArmorLevel ArmorLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearArmorLevelAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageCutRate;
    
    UShinsenAnimNotifyState_ArmorLevel();
};

