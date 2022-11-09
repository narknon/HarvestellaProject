#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "ShinsenWidgetComponent_DamageNumber.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHINSEN_API UShinsenWidgetComponent_DamageNumber : public UWidgetComponent {
    GENERATED_BODY()
public:
    UShinsenWidgetComponent_DamageNumber();
};

