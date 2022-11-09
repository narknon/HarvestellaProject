#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LwSysInterface_GameMode.generated.h"

UINTERFACE(Blueprintable)
class LWSYS_API ULwSysInterface_GameMode : public UInterface {
    GENERATED_BODY()
};

class LWSYS_API ILwSysInterface_GameMode : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SwitchPaused(const FString& InId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPauseEnabled(bool InFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPaused(bool InFlag, const FString& InId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPauseEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetPauseId() const;
    
};

