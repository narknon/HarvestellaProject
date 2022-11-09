#pragma once
#include "CoreMinimal.h"
#include "ShinsenCharacterSkillParam.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenCharacterSkillParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BattleSkillID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    FShinsenCharacterSkillParam();
};

