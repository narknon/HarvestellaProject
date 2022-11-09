#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ShinsenCharacterLandEffect.h"
#include "ShinsenDataAsset_CharacterLandEffect.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenDataAsset_CharacterLandEffect : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FShinsenCharacterLandEffect Walk[17];
    
    UPROPERTY(EditAnywhere)
    FShinsenCharacterLandEffect Run[17];
    
    UPROPERTY(EditAnywhere)
    FShinsenCharacterLandEffect JumpStart[17];
    
    UPROPERTY(EditAnywhere)
    FShinsenCharacterLandEffect LandingFoot[17];
    
    UPROPERTY(EditAnywhere)
    FShinsenCharacterLandEffect LandingBody[17];
    
    UShinsenDataAsset_CharacterLandEffect();
};

