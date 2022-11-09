#pragma once
#include "CoreMinimal.h"
#include "ShinsenWidgetBase.h"
#include "ShinsenWidgetMovie.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetMovie : public UShinsenWidgetBase {
    GENERATED_BODY()
public:
    UShinsenWidgetMovie();
    UFUNCTION(BlueprintCallable)
    void SetHandlingModeNotify(bool bEnable);
    
};

