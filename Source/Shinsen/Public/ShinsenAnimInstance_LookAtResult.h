#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenAnimInstance_LookAtResult.generated.h"

USTRUCT(BlueprintType)
struct FShinsenAnimInstance_LookAtResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    SHINSEN_API FShinsenAnimInstance_LookAtResult();
};

