#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ELwSysDebugScreenWidgetMenuInfoPosition.h"
#include "LwSysDebugScreenWidgetParamMenu.h"
#include "UObject/NoExportTypes.h"
#include "LwSysDebugScreenWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class LWSYSDEBUGSCREEN_API ULwSysDebugScreenWidget : public UUserWidget {
    GENERATED_BODY()
public:
    ULwSysDebugScreenWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMenuTextRight(int32 InIndex, const FString& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMenuTextLeft(int32 InIndex, const FString& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMenuTextCurrentRight(const FString& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMenuTextCurrentLeft(const FString& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMenuTextCurrentCenter(const FString& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMenuTextCenter(int32 InIndex, const FString& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenusIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenus(const TArray<FLwSysDebugScreenWidgetParamMenu>& InParams);
    
    UFUNCTION(BlueprintCallable)
    static void SetMenuParamTextRight(UPARAM(Ref) FLwSysDebugScreenWidgetParamMenu& RefParam, const FString& InText);
    
    UFUNCTION(BlueprintCallable)
    static void SetMenuParamTextLeft(UPARAM(Ref) FLwSysDebugScreenWidgetParamMenu& RefParam, const FString& InText);
    
    UFUNCTION(BlueprintCallable)
    static void SetMenuParamTextCenter(UPARAM(Ref) FLwSysDebugScreenWidgetParamMenu& RefParam, const FString& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenuInfoText(ELwSysDebugScreenWidgetMenuInfoPosition InPosition, const FString& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInfoTextRT(const FString& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInfoTextRB(const FString& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInfoTextLT(const FString& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInfoTextLB(const FString& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInfoFrameVisibility(bool bInVisibility, const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IncMenusIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetMenusNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetMenusIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecMenusIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearMenus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearMenuInfoTextAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearMenuInfoText(ELwSysDebugScreenWidgetMenuInfoPosition InPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearInfoTextRT();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearInfoTextRB();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearInfoTextLT();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearInfoTextLB();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearInfoTextAll();
    
};

