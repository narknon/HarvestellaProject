#pragma once
#include "CoreMinimal.h"
#include "ShinsenWidgetBase.h"
#include "OptionItem.h"
#include "ShinsenWidgetOption.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetOption : public UShinsenWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInMainGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionItem Item;
    
    UShinsenWidgetOption();
    UFUNCTION(BlueprintCallable)
    void SetDefaultGraphics();
    
    UFUNCTION(BlueprintCallable)
    void SetDefault();
    
};

