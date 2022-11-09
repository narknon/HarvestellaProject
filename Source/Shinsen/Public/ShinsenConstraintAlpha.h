#pragma once
#include "CoreMinimal.h"
#include "ShinsenConstraintAlpha.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenConstraintAlpha {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    FShinsenConstraintAlpha();
};

