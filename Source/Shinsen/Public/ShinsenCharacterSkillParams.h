#pragma once
#include "CoreMinimal.h"
#include "ShinsenCharacterSkillParam.h"
#include "ShinsenCharacterSkillParams.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenCharacterSkillParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterSkillParam ParamAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterSkillParam ParamU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterSkillParam ParamL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterSkillParam ParamB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterSkillParam ParamR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterSkillParam ParamSpecial;
    
    FShinsenCharacterSkillParams();
};

