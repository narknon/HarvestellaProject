#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LwSysInterface_HUD.generated.h"

class UUserWidget;

UINTERFACE(Blueprintable)
class LWSYS_API ULwSysInterface_HUD : public UInterface {
    GENERATED_BODY()
};

class LWSYS_API ILwSysInterface_HUD : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DebugRestoreWidget(UUserWidget* InIgnoreWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DebugPutRT(const FString& InStr);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DebugPutRB(const FString& InStr);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DebugInvisibleWidget(UUserWidget* InIgnoreWidget);
    
};

