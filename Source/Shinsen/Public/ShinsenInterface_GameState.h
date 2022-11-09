#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ShinsenInterface_GameState.generated.h"

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_GameState : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_GameState : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetGlobalTimeStringTimeZone();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetGlobalTimeStringTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetGlobalTimeStringDate();
    
};

