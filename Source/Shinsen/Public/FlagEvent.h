#pragma once
#include "CoreMinimal.h"
#include "FlagEvent.generated.h"

USTRUCT(BlueprintType)
struct FFlagEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> FlagMap;
    
    SHINSEN_API FFlagEvent();
};

