#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ShinsenAnimNotifyState_KawaiiPhysicsAlpha.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SHINSEN_API UShinsenAnimNotifyState_KawaiiPhysicsAlpha : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlphaBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlphaEnd;
    
    UShinsenAnimNotifyState_KawaiiPhysicsAlpha();
};

