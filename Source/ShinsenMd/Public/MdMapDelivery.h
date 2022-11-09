#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdDelivery.h"
#include "MdMapDelivery.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapDelivery : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdDelivery> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdDelivery Dummy;
    
    UMdMapDelivery();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdDelivery GetMd(const FString& InId) const;
    
};

