#pragma once
#include "CoreMinimal.h"
#include "ShinsenWidgetBase.h"
#include "ShinsenWidgetCreateSystemSaveWindow.h"
#include "ShinsenWidgetTrialStart.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetTrialStart : public UShinsenWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndWidgetSignature OnEndWidget;
    
    UShinsenWidgetTrialStart();
};

