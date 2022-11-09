#pragma once
#include "CoreMinimal.h"
#include "ShinsenDelayGaugeWork.h"
#include "Blueprint/UserWidget.h"
#include "ShinsenInterface_Widget.h"
#include "ShinsenWidgetBase.generated.h"

class UShinsenWidgetBase;
class UProgressBar;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetBase : public UUserWidget, public IShinsenInterface_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepeatKeyEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatKeyRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatKeyFirstDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RepeatArrowEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatArrowRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatArrowFirstDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShinsenWidgetBase* RootWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindowPlaybackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorMoveInterpSpeed;
    
    UShinsenWidgetBase();
    UFUNCTION(BlueprintCallable)
    void UpdateDelayGauge(UPARAM(Ref) FShinsenDelayGaugeWork& RefDelayGaugeWork, UProgressBar* InProgressBar, float InDeltaTime, float InRate, float InDelayTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Setup(const FString& WidgetID, UShinsenWidgetBase* Root);
    
    UFUNCTION(BlueprintCallable)
    void SetSeadEventMenuOpen(bool bOpen);
    
    UFUNCTION(BlueprintCallable)
    void SetInputEnable(bool bEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRepeatKey();
    
    UFUNCTION(BlueprintCallable)
    void OnRepeatArrow();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnd(const FString& WidgetID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonPressed(const FString& WidgetID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugSkipEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuYReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuYPressed(int32 RepeatCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuXReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuXPressed(int32 RepeatCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuUpReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuUpPressed(int32 RepeatCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuSpecialLeftReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuSpecialLeftPressed(int32 RepeatCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuRTReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuRTPressed(int32 RepeatCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuRightReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuRightPressed(int32 RepeatCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuRBReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuRBPressed(int32 RepeatCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuPauseReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuPausePressed(int32 RepeatCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuLTReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuLTPressed(int32 RepeatCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuLeftReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuLeftPressed(int32 RepeatCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuLBReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuLBPressed(int32 RepeatCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuDownReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuDownPressed(int32 RepeatCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuDecideReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuDecidePressed(int32 RepeatCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuCancelReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionMenuCancelPressed(int32 RepeatCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionKeyconfigResetPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InputActionKeyconfigDeletePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetCurrentFocusWidget();
    
    UFUNCTION(BlueprintCallable)
    void EnableKeyRepeat(int32 EnableKey, float Rate, float FirstDelay);
    
    UFUNCTION(BlueprintCallable)
    void EnableInput();
    
    UFUNCTION(BlueprintCallable)
    void EnableArrowRepeat(float Rate, float FirstDelay);
    
    UFUNCTION(BlueprintCallable)
    void DisableKeyRepeat(int32 DisableKey);
    
    UFUNCTION(BlueprintCallable)
    void DisableInput();
    
    UFUNCTION(BlueprintCallable)
    void DisableArrowRepeat();
    
    UFUNCTION(BlueprintCallable)
    void DebugLog(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    void ClearDelayGauge(UPARAM(Ref) FShinsenDelayGaugeWork& RefDelayGaugeWork, UProgressBar* InProgressBar, float InRate);
    
    
    // Fix for true pure virtual functions not being implemented
};

