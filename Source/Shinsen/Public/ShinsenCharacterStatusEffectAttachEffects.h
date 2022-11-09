#pragma once
#include "CoreMinimal.h"
#include "ShinsenCharacterStatusEffectAttachEffect.h"
#include "ShinsenCharacterStatusEffectAttachEffects.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenCharacterStatusEffectAttachEffects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenCharacterStatusEffectAttachEffect> AttachEffects;
    
    FShinsenCharacterStatusEffectAttachEffects();
};

