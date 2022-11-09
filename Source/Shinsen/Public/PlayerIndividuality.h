#pragma once
#include "CoreMinimal.h"
#include "EPlayerAppearanceEye.h"
#include "EPlayerAppearanceHair.h"
#include "EPlayerAppearanceBody.h"
#include "EPlayerVoiceType.h"
#include "EPlayerFirstPerson.h"
#include "PlayerIndividuality.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FPlayerIndividuality {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerAppearanceBody BodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerAppearanceHair HairType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerAppearanceEye EyeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerFirstPerson FirstPersonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerVoiceType VoiceType;
    
    FPlayerIndividuality();
};

