#pragma once
#include "CoreMinimal.h"
#include "MdKeyWinIconF.generated.h"

USTRUCT(BlueprintType)
struct SHINSENMD_API FMdKeyWinIconF {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Unicode;
    
    FMdKeyWinIconF();
};

