#pragma once
#include "CoreMinimal.h"
#include "ShinsenCurveColorParam.h"
#include "ShinsenCurveFloatParam.h"
#include "ShinsenMaterialLightCurve.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FShinsenMaterialLightCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenCurveFloatParam> CurveFloatParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenCurveColorParam> CurveColorParam;
    
    SHINSEN_API FShinsenMaterialLightCurve();
};

