#pragma once
#include "CoreMinimal.h"
#include "ShinsenFieldMessageAndSoundData.h"
#include "ShinsenDataAsset_CharacterVoiceInfo.generated.h"

USTRUCT(BlueprintType)
struct FShinsenDataAsset_CharacterVoiceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenFieldMessageAndSoundData MessageSoundData;
    
    SHINSEN_API FShinsenDataAsset_CharacterVoiceInfo();
};

