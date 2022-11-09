#pragma once
#include "CoreMinimal.h"
#include "MapAreaOpenFlag.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FMapAreaOpenFlag {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<uint8> Flag;
    
    FMapAreaOpenFlag();
};

