#pragma once
#include "CoreMinimal.h"
#include "ShinsenWidgetBase.h"
#include "ShinsenWidgetTitleMenu.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetTitleMenu : public UShinsenWidgetBase {
    GENERATED_BODY()
public:
    UShinsenWidgetTitleMenu();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleTrialBG(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableWarningLogo() const;
    
};

