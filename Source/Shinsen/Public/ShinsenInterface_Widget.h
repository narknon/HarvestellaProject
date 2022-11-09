#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "ECharacterSkillNotAvaliableReason.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenInterface_Widget.generated.h"

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_Widget : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_Widget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateWidgetFieldQuestGuidePriority();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateWidgetFieldQuestGuidePopup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateWidgetFieldButtonItemSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldTalkMessage(const FString& InName, const FString& InText, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldSystemWindow(const FString& InText, const FLinearColor& InTextColor, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldQuestGuideTutorial(bool bBusy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldGaugeSkillName(const FString& InSkillName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldGaugeMessage(const FString& InText, bool bInBgBlack, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldClockMessage(const FString& InText, bool bInBgBlack, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldButtonSkillAlert(ECharacterSkillNotAvaliableReason InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldButtonFarmShift();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldButtonFarm();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldButtonDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldButtonButtonShift();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldButtonBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDebugLayoutGuideMode(int32 Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SendFieldActionResultMessage(const FText& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SendFieldActionItemResult(FName InItemID, int32 InItemNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SendFieldActionAccessoryResult(FName InAccessoryID, int32 InItemNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayMovie(const FString& Path);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayLoadingMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideWidgetFieldTalkMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideWidgetFieldSystemWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideWidgetFieldGaugeMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideWidgetFieldClockMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetDebugLayoutGuideMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCurrentMiniMapAreaID(FVector Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayWidgetFieldQuestGuide(bool bInDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayWidgetAreaName(const FString& InStr1, const FString& InStr2, bool InIsSmall);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DispFieldActionResultMessageBackpackFull();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearWidgetAreaName();
    
};

