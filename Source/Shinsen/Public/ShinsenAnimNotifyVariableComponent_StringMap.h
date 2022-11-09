#pragma once
#include "CoreMinimal.h"
#include "ShinsenAnimNotifyVariableComponent_StringMap.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenAnimNotifyVariableComponent_StringMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> Map;
    
    FShinsenAnimNotifyVariableComponent_StringMap();
};

