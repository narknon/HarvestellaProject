#pragma once
#include "CoreMinimal.h"
#include "ShinsenAnimNotifyVariableComponent_ClassMap.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenAnimNotifyVariableComponent_ClassMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UClass*> Map;
    
    FShinsenAnimNotifyVariableComponent_ClassMap();
};

