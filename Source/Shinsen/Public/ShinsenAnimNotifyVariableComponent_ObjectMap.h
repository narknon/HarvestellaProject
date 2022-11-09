#pragma once
#include "CoreMinimal.h"
#include "ShinsenAnimNotifyVariableComponent_ObjectMap.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenAnimNotifyVariableComponent_ObjectMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UObject*> Map;
    
    FShinsenAnimNotifyVariableComponent_ObjectMap();
};

