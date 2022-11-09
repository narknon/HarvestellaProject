#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenAnimNotifyVariableComponent_RotatorMap.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenAnimNotifyVariableComponent_RotatorMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRotator> Map;
    
    FShinsenAnimNotifyVariableComponent_RotatorMap();
};

