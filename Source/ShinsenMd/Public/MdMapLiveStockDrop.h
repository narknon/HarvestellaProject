#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdLiveStockDrop.h"
#include "MdMapLiveStockDrop.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapLiveStockDrop : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdLiveStockDrop> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdLiveStockDrop Dummy;
    
    UMdMapLiveStockDrop();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdLiveStockDrop GetMd(const FString& InId) const;
    
};

