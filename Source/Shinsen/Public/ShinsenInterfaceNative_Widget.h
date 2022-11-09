#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Components/SlateWrapperTypes.h"
#include "ShinsenInterfaceNative_Widget.generated.h"

class APawn;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class SHINSEN_API UShinsenInterfaceNative_Widget : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterfaceNative_Widget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void UpdateWidgetFieldItemSelectCursor(bool bInInit, bool bInUse) PURE_VIRTUAL(UpdateWidgetFieldItemSelectCursor,);
    
    UFUNCTION(BlueprintCallable)
    virtual void UpdateWidgetFieldItemSelectAll(bool bInInit, bool bInUse) PURE_VIRTUAL(UpdateWidgetFieldItemSelectAll,);
    
    UFUNCTION(BlueprintCallable)
    virtual void UpdateWidgetField3dGauge(float InDeltaTime) PURE_VIRTUAL(UpdateWidgetField3dGauge,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetWidgetField3dVisivility(ESlateVisibility InVisibility) PURE_VIRTUAL(SetWidgetField3dVisivility,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetWidgetField3dGaugeScaleMin(float InScale) PURE_VIRTUAL(SetWidgetField3dGaugeScaleMin,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetWidgetField3dGaugeScaleDistance(float InStart, float InEnd) PURE_VIRTUAL(SetWidgetField3dGaugeScaleDistance,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RemoveWidgetField3dGaugeEnemy(APawn* inCharacter) PURE_VIRTUAL(RemoveWidgetField3dGaugeEnemy,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsWidgetFieldItemSelectOpened() const PURE_VIRTUAL(IsWidgetFieldItemSelectOpened, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void CloseWidgetFieldItemSelect() PURE_VIRTUAL(CloseWidgetFieldItemSelect,);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddWidgetField3dGaugeEnemy(APawn* inCharacter) PURE_VIRTUAL(AddWidgetField3dGaugeEnemy,);
    
};

