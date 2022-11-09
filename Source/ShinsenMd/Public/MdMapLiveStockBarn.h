#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdLiveStockBarn.h"
#include "MdMapLiveStockBarn.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapLiveStockBarn : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdLiveStockBarn> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdLiveStockBarn Dummy;
    
    UMdMapLiveStockBarn();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdLiveStockBarn GetMd(const FString& InId) const;
    
};

