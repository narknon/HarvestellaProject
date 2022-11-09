#pragma once
#include "CoreMinimal.h"
#include "ShinsenAnimNotifyVariableComponent_FloatMap.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenAnimNotifyVariableComponent_FloatMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> Map;
    
    FShinsenAnimNotifyVariableComponent_FloatMap();
};

