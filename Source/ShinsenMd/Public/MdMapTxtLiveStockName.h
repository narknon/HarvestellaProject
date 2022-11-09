#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtLiveStockName.h"
#include "MdMapTxtLiveStockName.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtLiveStockName : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtLiveStockName> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtLiveStockName Dummy;
    
    UMdMapTxtLiveStockName();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtLiveStockName GetMd(const FString& InId) const;
    
};

