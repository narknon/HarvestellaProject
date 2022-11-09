#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenInterface_Fade.generated.h"

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_Fade : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_Fade : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsBusy(bool& bBusy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOut(FLinearColor Color, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeIn(FLinearColor Color, float Time);
    
};

