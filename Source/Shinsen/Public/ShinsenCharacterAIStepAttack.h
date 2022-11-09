#pragma once
#include "CoreMinimal.h"
#include "ShinsenCharacterAIAttackType.h"
#include "ShinsenCharacterAIStepAttack.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenCharacterAIStepAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenCharacterAIAttackType> AIAttackTypes;
    
    FShinsenCharacterAIStepAttack();
};

