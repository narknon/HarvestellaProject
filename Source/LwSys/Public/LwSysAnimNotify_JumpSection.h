#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "LwSysAnimNotify_JumpSection.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class LWSYS_API ULwSysAnimNotify_JumpSection : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Section;
    
    ULwSysAnimNotify_JumpSection();
};

