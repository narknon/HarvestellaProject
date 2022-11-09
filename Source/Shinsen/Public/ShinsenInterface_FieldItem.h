#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ShinsenInterface_FieldItem.generated.h"

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_FieldItem : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_FieldItem : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void VisibleTarget(bool bVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnGetEffect();
    
};

