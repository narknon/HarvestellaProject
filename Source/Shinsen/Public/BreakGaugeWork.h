#pragma once
#include "CoreMinimal.h"
#include "BreakGaugeWork.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FBreakGaugeWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> GaugeDispFlags;
    
    FBreakGaugeWork();
};

