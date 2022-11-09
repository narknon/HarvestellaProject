#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ShinsenInterfaceNative_Widget.h"
#include "Components/SlateWrapperTypes.h"
#include "ShinsenWidgetFieldItemSelect.generated.h"

class UImage;
class UCanvasPanel;
class UHorizontalBox;
class UTextBlock;
class UShinsenWidgetFieldItemSelectChild;
class UShinsenWidgetFieldItemSelectInfo;
class APawn;

UCLASS(Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetFieldItemSelect : public UUserWidget, public IShinsenInterfaceNative_Widget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_InfoStomachText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_InfoStomachIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_InfoCategoryIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShinsenWidgetFieldItemSelectChild* Item0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShinsenWidgetFieldItemSelectChild* Item1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShinsenWidgetFieldItemSelectChild* Item2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShinsenWidgetFieldItemSelectChild* Item3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShinsenWidgetFieldItemSelectChild* Item4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShinsenWidgetFieldItemSelectChild* Item5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShinsenWidgetFieldItemSelectChild* Item6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShinsenWidgetFieldItemSelectChild* Item7;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_Info;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UShinsenWidgetFieldItemSelectInfo> WidgetClassInfo;
    
public:
    UShinsenWidgetFieldItemSelect();
    
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

