#pragma once
#include "CoreMinimal.h"
#include "ShinsenDataAsset_CharacterSwapVoiceInfo.h"
#include "ShinsenDataAsset_CharacterSwapVoiceInfos.generated.h"

USTRUCT(BlueprintType)
struct FShinsenDataAsset_CharacterSwapVoiceInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenDataAsset_CharacterSwapVoiceInfo> SwapInfos;
    
    SHINSEN_API FShinsenDataAsset_CharacterSwapVoiceInfos();
};

