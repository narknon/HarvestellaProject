#pragma once
#include "CoreMinimal.h"
#include "EMapIconType.h"
#include "ScheduleMarker.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FScheduleMarker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapIconType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    FScheduleMarker();
};

