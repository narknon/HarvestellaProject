#pragma once
#include "CoreMinimal.h"
#include "CharacterVoiceCoolDown.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FCharacterVoiceCoolDown {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
public:
    FCharacterVoiceCoolDown();
};

