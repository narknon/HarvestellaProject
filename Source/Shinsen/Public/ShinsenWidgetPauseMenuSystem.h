#pragma once
#include "CoreMinimal.h"
#include "ShinsenWidgetBase.h"
#include "ShinsenWidgetPauseMenuSystem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetPauseMenuSystem : public UShinsenWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDebug;
    
    UShinsenWidgetPauseMenuSystem();
    UFUNCTION(BlueprintCallable)
    bool GetSaveEnabled();
    
};

