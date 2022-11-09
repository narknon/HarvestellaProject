#pragma once
#include "CoreMinimal.h"
#include "EffectAOERectangleEffectSpawnParam.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FEffectAOERectangleEffectSpawnParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AreaDivideNumFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AreaDivideNumSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectNumPerDividedArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectSpawnRandomMaxRate;
    
    FEffectAOERectangleEffectSpawnParam();
};

