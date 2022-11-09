#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ShinsenInterface_Fishing.generated.h"

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_Fishing : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_Fishing : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TryCatch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ThrowFishingFloat();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RiseFishingFloat(bool bIsHit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetFishingStamina() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DispResult();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CleanupFishing();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelFishing();
    
};

