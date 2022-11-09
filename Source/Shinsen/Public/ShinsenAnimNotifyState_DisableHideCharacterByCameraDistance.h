#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ShinsenAnimNotifyState_DisableHideCharacterByCameraDistance.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SHINSEN_API UShinsenAnimNotifyState_DisableHideCharacterByCameraDistance : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllActors;
    
    UShinsenAnimNotifyState_DisableHideCharacterByCameraDistance();
};

