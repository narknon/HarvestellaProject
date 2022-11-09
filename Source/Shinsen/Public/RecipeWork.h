#pragma once
#include "CoreMinimal.h"
#include "ERecipeStatus.h"
#include "RecipeWork.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FRecipeWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERecipeStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompleteDays;
    
    FRecipeWork();
};

