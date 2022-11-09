#pragma once
#include "CoreMinimal.h"
#include "ShinsenCurveColorParam.generated.h"

class UCurveLinearColor;

USTRUCT(BlueprintType)
struct FShinsenCurveColorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* CurveColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* CloudyCurveColor;
    
    SHINSEN_API FShinsenCurveColorParam();
};

