#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "LwSysAnimNotifyState_PlayRate.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class LWSYS_API ULwSysAnimNotifyState_PlayRate : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rate;
    
    ULwSysAnimNotifyState_PlayRate();
};

