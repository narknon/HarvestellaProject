#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdDeliveryReward.h"
#include "MdMapDeliveryReward.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapDeliveryReward : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdDeliveryReward> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdDeliveryReward Dummy;
    
    UMdMapDeliveryReward();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdDeliveryReward GetMd(const FString& InId) const;
    
};

