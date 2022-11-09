#pragma once
#include "CoreMinimal.h"
#include "CharacterStatusEffectInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct SHINSEN_API FCharacterStatusEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FCharacterStatusEffectInfo();
};

