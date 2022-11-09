#pragma once
#include "CoreMinimal.h"
#include "ECharacterBattleVoice.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ECharacterVoiceSpeaker.h"
#include "ShinsenAnimNotify_PlayBattleVoice.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SHINSEN_API UShinsenAnimNotify_PlayBattleVoice : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterBattleVoice Voice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterVoiceSpeaker Speaker;
    
    UShinsenAnimNotify_PlayBattleVoice();
};

