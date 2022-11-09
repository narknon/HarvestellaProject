#pragma once
#include "CoreMinimal.h"
#include "ELiveStockType.h"
#include "LiveStockBarn.h"
#include "LiveStockIndividual.h"
#include "LiveStockWork.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FLiveStockWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELiveStockType, FLiveStockBarn> Barn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLiveStockIndividual> Individual;
    
    FLiveStockWork();
};

