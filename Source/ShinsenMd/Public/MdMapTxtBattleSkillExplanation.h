#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtBattleSkillExplanation.h"
#include "MdMapTxtBattleSkillExplanation.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtBattleSkillExplanation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtBattleSkillExplanation> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtBattleSkillExplanation Dummy;
    
    UMdMapTxtBattleSkillExplanation();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtBattleSkillExplanation GetMd(const FString& InId) const;
    
};

