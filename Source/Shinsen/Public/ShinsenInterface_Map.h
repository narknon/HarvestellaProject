#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ShinsenInterface_Map.generated.h"

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_Map : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_Map : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMapSubLevelVisibility(const FString& InPackageName, bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMapChangeEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBusyMapChangeFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsMapSubLevelVisibility(const FString& InPackageName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IsMapChangeEnabled(bool& bEnable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBusyMapChange() const;
    
};

