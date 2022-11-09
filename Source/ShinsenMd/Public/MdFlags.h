#pragma once
#include "CoreMinimal.h"
#include "MdFlags.generated.h"

USTRUCT(BlueprintType)
struct SHINSENMD_API FMdFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    FMdFlags();
};

