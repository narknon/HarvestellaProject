#pragma once
#include "CoreMinimal.h"
#include "EffectAOECircleEffectSpawnParam.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FEffectAOECircleEffectSpawnParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectStepAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectNumPerStepAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectSpawnRandomMinRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectSpawnRandomMaxRate;
    
    FEffectAOECircleEffectSpawnParam();
};

