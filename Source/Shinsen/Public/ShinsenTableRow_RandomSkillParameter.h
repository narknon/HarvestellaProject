#pragma once
#include "CoreMinimal.h"
#include "ShinsenTableRow_SkillParameter.h"
#include "ShinsenTableRow_RandomSkillParameter.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenTableRow_RandomSkillParameter : public FShinsenTableRow_SkillParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FShinsenTableRow_RandomSkillParameter();
};

