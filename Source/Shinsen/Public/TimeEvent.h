#pragma once
#include "CoreMinimal.h"
#include "TimeEvent.generated.h"

USTRUCT(BlueprintType)
struct FTimeEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Kind;
    
    SHINSEN_API FTimeEvent();
};

