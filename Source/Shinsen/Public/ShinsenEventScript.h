#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShinsenEventScript.generated.h"

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenEventScript : public AActor {
    GENERATED_BODY()
public:
    AShinsenEventScript();
    UFUNCTION(BlueprintCallable)
    void EffectSeedsLightStart(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void EffectSeedsLightEnd(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void EffectMS0203Start();
    
};

