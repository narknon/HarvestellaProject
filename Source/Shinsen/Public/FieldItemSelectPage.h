#pragma once
#include "CoreMinimal.h"
#include "Item.h"
#include "FieldItemSelectPage.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FFieldItemSelectPage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItem> Items;
    
    FFieldItemSelectPage();
};

