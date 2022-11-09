#pragma once
#include "CoreMinimal.h"
#include "MdRegion.generated.h"

USTRUCT(BlueprintType)
struct SHINSENMD_API FMdRegion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FlagFA;
    
    FMdRegion();
};

