#pragma once
#include "CoreMinimal.h"
#include "ShinsenCharacterLandEffect.generated.h"

class UNiagaraSystem;
class USQEXSEADSoundBank;
class UParticleSystem;

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenCharacterLandEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundBank* LandSoundBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LandParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* LandNiagara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomRadiusMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomRadiusMax;
    
    FShinsenCharacterLandEffect();
};

