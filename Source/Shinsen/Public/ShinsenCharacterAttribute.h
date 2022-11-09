#pragma once
#include "CoreMinimal.h"
#include "ShinsenCharacterAttribute.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenCharacterAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    FShinsenCharacterAttribute();
};

