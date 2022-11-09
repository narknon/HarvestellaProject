#pragma once
#include "CoreMinimal.h"
#include "MdImportantItemCategory.generated.h"

USTRUCT(BlueprintType)
struct SHINSENMD_API FMdImportantItemCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathIcon;
    
    FMdImportantItemCategory();
};

