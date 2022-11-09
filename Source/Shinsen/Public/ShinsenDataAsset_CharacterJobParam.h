#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ShinsenCharacterJobParam.h"
#include "ShinsenDataAsset_CharacterJobParam.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenDataAsset_CharacterJobParam : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterJobParam Param;
    
    UShinsenDataAsset_CharacterJobParam();
};

