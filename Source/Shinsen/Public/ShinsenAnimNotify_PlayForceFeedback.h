#pragma once
#include "CoreMinimal.h"
#include "EForceFeedbackType.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ShinsenAnimNotify_PlayForceFeedback.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SHINSEN_API UShinsenAnimNotify_PlayForceFeedback : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EForceFeedbackType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UShinsenAnimNotify_PlayForceFeedback();
};

