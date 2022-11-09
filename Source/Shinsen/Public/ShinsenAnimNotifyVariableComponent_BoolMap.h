#pragma once
#include "CoreMinimal.h"
#include "ShinsenAnimNotifyVariableComponent_BoolMap.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenAnimNotifyVariableComponent_BoolMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> Map;
    
    FShinsenAnimNotifyVariableComponent_BoolMap();
};

