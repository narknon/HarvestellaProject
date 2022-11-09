#pragma once
#include "CoreMinimal.h"
#include "MdSysFlags.generated.h"

USTRUCT(BlueprintType)
struct SHINSENMD_API FMdSysFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    FMdSysFlags();
};

