#pragma once
#include "CoreMinimal.h"
#include "ShinsenWidgetBase.h"
#include "ShinsenWidgetTutorialBook.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetTutorialBook : public UShinsenWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BookID;
    
    UShinsenWidgetTutorialBook();
protected:
    UFUNCTION(BlueprintCallable)
    void HideTutorialWidget(bool bHide);
    
};

