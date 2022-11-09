#pragma once
#include "CoreMinimal.h"
#include "ShinsenAnimNotifyVariableComponent_EnumMap.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenAnimNotifyVariableComponent_EnumMap {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, uint8> Map;
    
    FShinsenAnimNotifyVariableComponent_EnumMap();
};

