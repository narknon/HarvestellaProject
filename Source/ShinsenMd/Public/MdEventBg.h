#pragma once
#include "CoreMinimal.h"
#include "MdEventBg.generated.h"

USTRUCT(BlueprintType)
struct SHINSENMD_API FMdEventBg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathBg;
    
    FMdEventBg();
};

