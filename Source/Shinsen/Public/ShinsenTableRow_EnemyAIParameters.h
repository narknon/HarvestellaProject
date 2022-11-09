#pragma once
#include "CoreMinimal.h"
#include "ShinsenTableRow_CharacterAIParameters.h"
#include "ShinsenTableRow_PrioritySkillParameter.h"
#include "ShinsenTableRow_RandomSkillParameter.h"
#include "ShinsenTableRow_EnemyAIParameters.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenTableRow_EnemyAIParameters : public FShinsenTableRow_CharacterAIParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenTableRow_PrioritySkillParameter> PrioritySkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenTableRow_RandomSkillParameter> RandomSkills;
    
    FShinsenTableRow_EnemyAIParameters();
};

