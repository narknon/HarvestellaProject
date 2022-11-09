#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdFairyOrderReward.h"
#include "MdMapFairyOrderReward.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapFairyOrderReward : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdFairyOrderReward> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdFairyOrderReward Dummy;
    
    UMdMapFairyOrderReward();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdFairyOrderReward GetMd(const FString& InId) const;
    
};

