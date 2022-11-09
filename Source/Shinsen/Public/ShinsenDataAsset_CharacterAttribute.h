#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ShinsenCharacterAttribute.h"
#include "ShinsenDataAsset_CharacterAttribute.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenDataAsset_CharacterAttribute : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FShinsenCharacterAttribute Attribute[12];
    
    UShinsenDataAsset_CharacterAttribute();
};

