#pragma once
#include "CoreMinimal.h"
#include "AccessoryEffect.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FAccessoryEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Param;
    
    FAccessoryEffect();
};

