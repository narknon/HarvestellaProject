#pragma once
#include "CoreMinimal.h"
#include "ShinsenEffectPack.generated.h"

class UNiagaraComponent;
class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenEffectPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* Niagara;
    
    FShinsenEffectPack();
};

