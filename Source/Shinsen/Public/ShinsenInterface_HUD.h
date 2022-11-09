#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ShinsenInterface_HUD.generated.h"

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_HUD : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_HUD : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPauseMenuDebugEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenPauseMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsOpenPauseMenuDebug() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsOpenPauseMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClosePauseMenu();
    
};

