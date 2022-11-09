#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdBattleSkill.h"
#include "MdMapBattleSkill.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapBattleSkill : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdBattleSkill> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdBattleSkill Dummy;
    
    UMdMapBattleSkill();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdBattleSkill GetMd(const FString& InId) const;
    
};

