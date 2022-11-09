#pragma once
#include "CoreMinimal.h"
#include "ShinsenFieldMessageData.h"
#include "ShinsenFieldMessageAndSoundData.generated.h"

class USQEXSEADSoundBank;

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenFieldMessageAndSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenFieldMessageData> Texts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSingleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundBank* SoundBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAttachedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceStopPreviousMessageSound;
    
    FShinsenFieldMessageAndSoundData();
};

