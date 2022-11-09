#pragma once
#include "CoreMinimal.h"
#include "ShinsenWidgetBase.h"
#include "ShinsenWidgetWorldMapGuide.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetWorldMapGuide : public UShinsenWidgetBase {
    GENERATED_BODY()
public:
    UShinsenWidgetWorldMapGuide();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePetGuide(bool bFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DispEnterArea(bool bDisp, bool bIsAirship);
    
};

