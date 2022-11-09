#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ShinsenInterfaceNative_Widget.h"
#include "Components/SlateWrapperTypes.h"
#include "ShinsenWidgetField3dGauge.generated.h"

class APawn;
class UShinsenWidgetField3dGaugeTarget;
class UShinsenWidgetField3dGaugeChild;

UCLASS(Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetField3dGauge : public UUserWidget, public IShinsenInterfaceNative_Widget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UShinsenWidgetField3dGaugeChild> WidgetClassChild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UShinsenWidgetField3dGaugeTarget> WidgetClassTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TMap<APawn*, UShinsenWidgetField3dGaugeChild*> WidgetChilds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShinsenWidgetField3dGaugeTarget* WidgetTarget;
    
public:
    UShinsenWidgetField3dGauge();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void UpdateWidgetFieldItemSelectCursor(bool bInInit, bool bInUse) override PURE_VIRTUAL(UpdateWidgetFieldItemSelectCursor,);
    
    UFUNCTION(BlueprintCallable)
    void UpdateWidgetFieldItemSelectAll(bool bInInit, bool bInUse) override PURE_VIRTUAL(UpdateWidgetFieldItemSelectAll,);
    
    UFUNCTION(BlueprintCallable)
    void UpdateWidgetField3dGauge(float InDeltaTime) override PURE_VIRTUAL(UpdateWidgetField3dGauge,);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetField3dVisivility(ESlateVisibility InVisibility) override PURE_VIRTUAL(SetWidgetField3dVisivility,);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetField3dGaugeScaleMin(float InScale) override PURE_VIRTUAL(SetWidgetField3dGaugeScaleMin,);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetField3dGaugeScaleDistance(float InStart, float InEnd) override PURE_VIRTUAL(SetWidgetField3dGaugeScaleDistance,);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWidgetField3dGaugeEnemy(APawn* inCharacter) override PURE_VIRTUAL(RemoveWidgetField3dGaugeEnemy,);
    
    UFUNCTION(BlueprintCallable)
    bool IsWidgetFieldItemSelectOpened() const override PURE_VIRTUAL(IsWidgetFieldItemSelectOpened, return false;);
    
    UFUNCTION(BlueprintCallable)
    void CloseWidgetFieldItemSelect() override PURE_VIRTUAL(CloseWidgetFieldItemSelect,);
    
    UFUNCTION(BlueprintCallable)
    void AddWidgetField3dGaugeEnemy(APawn* inCharacter) override PURE_VIRTUAL(AddWidgetField3dGaugeEnemy,);
    
};

