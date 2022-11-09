#pragma once
#include "CoreMinimal.h"
#include "ShinsenEffectPack.h"
#include "ShinsenCharacterStatusEffectAttachEffect.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenCharacterStatusEffectAttachEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenEffectPack EffectPack;
    
    FShinsenCharacterStatusEffectAttachEffect();
};

