#pragma once
#include "CoreMinimal.h"
#include "ShinsenCharacterHitAttribute.generated.h"

class UNiagaraSystem;
class USQEXSEADSoundBank;
class UParticleSystem;

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenCharacterHitAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundBank* HitSoundBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* HitParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* HitNiagara;
    
    FShinsenCharacterHitAttribute();
};

