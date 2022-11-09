#pragma once
#include "CoreMinimal.h"
#include "ShinsenAnimNotifyVariableComponent_IntMap.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenAnimNotifyVariableComponent_IntMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> Map;
    
    FShinsenAnimNotifyVariableComponent_IntMap();
};

