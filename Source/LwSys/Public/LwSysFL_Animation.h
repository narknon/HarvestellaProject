#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LwSysFL_Animation.generated.h"

class UBlendSpaceBase;
class UAnimSequence;

UCLASS(Blueprintable)
class LWSYS_API ULwSysFL_Animation : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULwSysFL_Animation();
    UFUNCTION(BlueprintCallable)
    static void GetRelevantAnimationInBlendSpace(UBlendSpaceBase* BlendSpace, const float Rate, UAnimSequence*& Animation);
    
};

