#pragma once
#include "CoreMinimal.h"
#include "EDirectInputPadKeyNames.h"
#include "UObject/Object.h"
#include "EXInputPadKeyNames.h"
#include "DIKeyMapInfo.h"
#include "DIGamePadKeyState.h"
#include "DirectInputPadJoystick.generated.h"

UCLASS(Blueprintable)
class DIRECTINPUTPADPLUGIN_API UDirectInputPadJoystick : public UObject {
    GENERATED_BODY()
public:
    UDirectInputPadJoystick();
    UFUNCTION(BlueprintCallable)
    void SetKeyMap(TEnumAsByte<EXInputPadKeyNames> XIKey, TEnumAsByte<EDirectInputPadKeyNames> DIKey, bool bNegative);
    
    UFUNCTION(BlueprintCallable)
    void SetAxisReverse(TEnumAsByte<EDirectInputPadKeyNames> DIAxis, bool bReverse);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChagnedKeyState() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAxisReverse(TEnumAsByte<EDirectInputPadKeyNames> DIAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetProductName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerIndex() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FDIKeyMapInfo> GetKeyMap(TEnumAsByte<EXInputPadKeyNames> eDIKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGUID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDIGamePadKeyState GetChangedKeyState(bool bReal, bool bBtn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDIGamePadKeyState> GetAllChangedKeyState(bool bReal);
    
    UFUNCTION(BlueprintCallable)
    void ClearInput();
    
};

