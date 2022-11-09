#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EElevatorMoveMode.h"
#include "InputCoreTypes.h"
#include "ButtonAndText.h"
#include "ShinsenInterface_MapObject.generated.h"

class AShinsenCharacter;

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_MapObject : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_MapObject : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGamma(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetElevatorMoveMode(EElevatorMoveMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputActionFunctionEx(FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputActionFunction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetActionTextEx(TArray<FButtonAndText>& ButtonAndTexts, FText& TargetName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetActionText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteAction(int32 Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CanPlayerActionEx(AShinsenCharacter* Player, FKey Key, bool& bCanAction, float& Dist);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CanPlayerAction(AShinsenCharacter* Player, bool& bCanAction, float& Dist);
    
};

