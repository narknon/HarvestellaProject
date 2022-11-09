#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ShinsenWidgetField3dGaugeTarget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetField3dGaugeTarget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_LockOn;
    
    UShinsenWidgetField3dGaugeTarget();
};

