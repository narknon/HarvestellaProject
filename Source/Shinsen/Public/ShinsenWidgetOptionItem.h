#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EOptionItemType.h"
#include "ShinsenWidgetOptionItem.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetOptionItem : public UUserWidget {
    GENERATED_BODY()
public:
    UShinsenWidgetOptionItem();
protected:
    UFUNCTION(BlueprintCallable)
    void SetValue(EOptionItemType Type, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    int32 GetValue(EOptionItemType Type);
    
};

