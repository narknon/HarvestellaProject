#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ShinsenInterface_FieldPicking.generated.h"

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_FieldPicking : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_FieldPicking : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void VisibleTarget(bool bVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnGetEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDispMiniMapIcon();
    
};

