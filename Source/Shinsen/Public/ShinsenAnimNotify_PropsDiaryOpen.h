#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ShinsenAnimNotify_PropsDiaryOpen.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SHINSEN_API UShinsenAnimNotify_PropsDiaryOpen : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpen;
    
    UShinsenAnimNotify_PropsDiaryOpen();
};

