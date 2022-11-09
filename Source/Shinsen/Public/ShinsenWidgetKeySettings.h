#pragma once
#include "CoreMinimal.h"
#include "ShinsenWidgetBase.h"
#include "ShinsenWidgetKeySettings.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetKeySettings : public UShinsenWidgetBase {
    GENERATED_BODY()
public:
    UShinsenWidgetKeySettings();
protected:
    UFUNCTION(BlueprintCallable)
    UDataTable* GetDefaultKeySettingTable();
    
};

