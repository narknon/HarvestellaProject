#pragma once
#include "CoreMinimal.h"
#include "ShinsenAnimNotifyVariableComponent_NameMap.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenAnimNotifyVariableComponent_NameMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> Map;
    
    FShinsenAnimNotifyVariableComponent_NameMap();
};

