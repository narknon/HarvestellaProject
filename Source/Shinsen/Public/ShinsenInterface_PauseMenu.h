#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ButtonAndText.h"
#include "ShinsenInterface_PauseMenu.generated.h"

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_PauseMenu : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_PauseMenu : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFooterItemsDisable(const TArray<FButtonAndText>& Array);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFooterItems(const TArray<FButtonAndText>& Array);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDefaultFooterItems();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputPauseButton();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CanSkipPauseMenu(bool& bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CanExitPauseMenu(bool& bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CanChangeCategory(bool& bEnable);
    
};

