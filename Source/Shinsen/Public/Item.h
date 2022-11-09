#pragma once
#include "CoreMinimal.h"
#include "Item.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    FItem();
};

