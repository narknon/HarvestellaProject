#pragma once
#include "CoreMinimal.h"
#include "EffectAOERectangleEffectSpawnParam.h"
#include "EffectAOERectangleParticle.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct SHINSEN_API FEffectAOERectangleParticle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEffectAOERectangleEffectSpawnParam SpawnParam;
    
    FEffectAOERectangleParticle();
};

