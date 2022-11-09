#pragma once
#include "CoreMinimal.h"
#include "EffectAOECircleEffectSpawnParam.h"
#include "EffectAOECircleParticle.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct SHINSEN_API FEffectAOECircleParticle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEffectAOECircleEffectSpawnParam SpawnParam;
    
    FEffectAOECircleParticle();
};

