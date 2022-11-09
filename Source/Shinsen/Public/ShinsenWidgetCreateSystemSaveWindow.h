#pragma once
#include "CoreMinimal.h"
#include "ShinsenWidgetBase.h"
#include "ShinsenWidgetCreateSystemSaveWindow.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndWidgetSignature);

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetCreateSystemSaveWindow : public UShinsenWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndWidgetSignature OnEndWidget;
    
    UShinsenWidgetCreateSystemSaveWindow();
};

