#pragma once
#include "CoreMinimal.h"
#include "CharacterStatusEffect.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct SHINSEN_API FCharacterStatusEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    FCharacterStatusEffect();
};

