#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdLiveStockIndividual.h"
#include "MdMapLiveStockIndividual.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapLiveStockIndividual : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdLiveStockIndividual> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdLiveStockIndividual Dummy;
    
    UMdMapLiveStockIndividual();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdLiveStockIndividual GetMd(const FString& InId) const;
    
};

