#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SQEXSEADEventLabelData.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADEventLabelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LabelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BeginEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndEventName;
    
    SQEXSEADEVENT_API FSQEXSEADEventLabelData();
};

