#pragma once
#include "CoreMinimal.h"
#include "EShinsenTableRow_AIRange.h"
#include "ShinsenTableRow_SkillParameter.h"
#include "ShinsenTableRow_CharacterAIParameters.h"
#include "ShinsenTableRow_FriendAIParameters.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenTableRow_FriendAIParameters : public FShinsenTableRow_CharacterAIParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenTableRow_SkillParameter NormalSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenTableRow_AIRange AIRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetAvoidDistance;
    
    FShinsenTableRow_FriendAIParameters();
};

