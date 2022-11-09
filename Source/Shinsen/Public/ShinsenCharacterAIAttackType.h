#pragma once
#include "CoreMinimal.h"
#include "ECharacterAIAttackType.h"
#include "ShinsenCharacterAIAttackType.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenCharacterAIAttackType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAIAttackType AIAttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillParamsIndex;
    
    FShinsenCharacterAIAttackType();
};

