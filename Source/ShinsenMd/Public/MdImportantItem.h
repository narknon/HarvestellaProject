#pragma once
#include "CoreMinimal.h"
#include "MdImportantItem.generated.h"

USTRUCT(BlueprintType)
struct SHINSENMD_API FMdImportantItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortID;
    
    FMdImportantItem();
};

