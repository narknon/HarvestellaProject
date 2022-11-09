#pragma once
#include "CoreMinimal.h"
#include "ShinsenTableRow_SkillParameter.h"
#include "ShinsenTableRow_PrioritySkillParameter.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenTableRow_PrioritySkillParameter : public FShinsenTableRow_SkillParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRangeCheck;
    
    FShinsenTableRow_PrioritySkillParameter();
};

