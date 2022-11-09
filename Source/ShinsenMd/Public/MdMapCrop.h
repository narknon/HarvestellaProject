#pragma once
#include "CoreMinimal.h"
#include "MdMapCrop.generated.h"

USTRUCT(BlueprintType)
struct SHINSENMD_API FMdMapCrop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    FMdMapCrop();
};

