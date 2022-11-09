#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ShinsenInterface_Script.generated.h"

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_Script : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_Script : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEventActorParamater(float Value, float Time);
    
};

