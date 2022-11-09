#pragma once
#include "CoreMinimal.h"
#include "ShinsenCharacterAIAttackType.h"
#include "ECharacterArmorLevel.h"
#include "ECharacterAIAttackTargetType.h"
#include "ShinsenTableRow_SkillParameter.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenTableRow_SkillParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterAIAttackType SkillType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAIAttackTargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterArmorLevel ArmorLevel;
    
    FShinsenTableRow_SkillParameter();
};

