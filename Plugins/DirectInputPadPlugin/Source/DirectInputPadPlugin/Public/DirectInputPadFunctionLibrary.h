#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DirectInputPadFunctionLibrary.generated.h"

class UDirectInputPadJoystick;

UCLASS(Blueprintable)
class DIRECTINPUTPADPLUGIN_API UDirectInputPadFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDirectInputPadFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool SaveDirectInputPadKeyMap(const FString& SlotName, int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadDirectInputPadKeyMap(const FString& SlotName, int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInitilizedDirectInputPadPlugin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetXInputPadNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDirectInputPadNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDirectInputPadJoystick* GetDirectInputPadJoystick(int32 PlayerIndex);
    
};

