#pragma once
#include "CoreMinimal.h"
#include "ScheduleTimeTableRow.generated.h"

USTRUCT(BlueprintType)
struct FScheduleTimeTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IDs;
    
    SHINSEN_API FScheduleTimeTableRow();
};

