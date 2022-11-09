#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenAnimNotifyVariableComponent_VectorMap.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenAnimNotifyVariableComponent_VectorMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVector> Map;
    
    FShinsenAnimNotifyVariableComponent_VectorMap();
};

