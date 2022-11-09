#pragma once
#include "CoreMinimal.h"
#include "ShinsenCurveFloatParam.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FShinsenCurveFloatParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CurveFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CloudyCurveFloat;
    
    SHINSEN_API FShinsenCurveFloatParam();
};

