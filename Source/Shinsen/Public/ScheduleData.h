#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ScheduleData.generated.h"

USTRUCT(BlueprintType)
struct FScheduleData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IDs;
    
    SHINSEN_API FScheduleData();
};

