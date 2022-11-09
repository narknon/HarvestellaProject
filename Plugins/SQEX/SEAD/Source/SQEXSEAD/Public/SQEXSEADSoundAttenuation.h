#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SQEXSEADSoundAttenuationSettings.h"
#include "SQEXSEADSoundAttenuation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SQEXSEAD_API USQEXSEADSoundAttenuation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADSoundAttenuationSettings Attenuation;
    
    USQEXSEADSoundAttenuation();
};

