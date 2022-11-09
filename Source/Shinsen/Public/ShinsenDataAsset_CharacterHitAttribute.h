#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ShinsenCharacterHitAttribute.h"
#include "ShinsenDataAsset_CharacterHitAttribute.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenDataAsset_CharacterHitAttribute : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FShinsenCharacterHitAttribute HitAttribute[9];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterHitAttribute HitCritical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterHitAttribute HitBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterHitAttribute HitDoubleBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterHitAttribute HitGuard;
    
    UShinsenDataAsset_CharacterHitAttribute();
};

