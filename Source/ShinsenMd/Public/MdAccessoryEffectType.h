#pragma once
#include "CoreMinimal.h"
#include "MdAccessoryEffectType.generated.h"

USTRUCT(BlueprintType)
struct SHINSENMD_API FMdAccessoryEffectType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Limit;
    
    FMdAccessoryEffectType();
};

