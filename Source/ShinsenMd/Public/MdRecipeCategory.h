#pragma once
#include "CoreMinimal.h"
#include "MdRecipeCategory.generated.h"

USTRUCT(BlueprintType)
struct SHINSENMD_API FMdRecipeCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    FMdRecipeCategory();
};

