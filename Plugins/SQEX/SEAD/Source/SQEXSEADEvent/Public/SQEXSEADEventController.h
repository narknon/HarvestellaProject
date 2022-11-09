#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADEventLabelData.h"
#include "UObject/Object.h"
#include "SQEXSEADEventController.generated.h"

UCLASS(Blueprintable)
class SQEXSEADEVENT_API USQEXSEADEventController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSQEXSEADEventLabelData> LabelMap;
    
public:
    USQEXSEADEventController();
};

