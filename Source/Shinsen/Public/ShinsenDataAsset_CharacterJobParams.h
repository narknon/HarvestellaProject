#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ShinsenDataAsset_CharacterJobParams.generated.h"

class UShinsenDataAsset_CharacterJobParam;

UCLASS(Blueprintable)
class SHINSEN_API UShinsenDataAsset_CharacterJobParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UShinsenDataAsset_CharacterJobParam> Param[12];
    
    UShinsenDataAsset_CharacterJobParams();
};

