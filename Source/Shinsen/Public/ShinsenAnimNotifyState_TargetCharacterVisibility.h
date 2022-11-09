#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ShinsenAnimNotifyState_TargetCharacterVisibility.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SHINSEN_API UShinsenAnimNotifyState_TargetCharacterVisibility : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibilityBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibilityEnd;
    
    UShinsenAnimNotifyState_TargetCharacterVisibility();
};

