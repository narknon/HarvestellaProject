#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtBattleSkillName.h"
#include "MdMapTxtBattleSkillName.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtBattleSkillName : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtBattleSkillName> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtBattleSkillName Dummy;
    
    UMdMapTxtBattleSkillName();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtBattleSkillName GetMd(const FString& InId) const;
    
};

