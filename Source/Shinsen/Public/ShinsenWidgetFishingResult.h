#pragma once
#include "CoreMinimal.h"
#include "ShinsenWidgetBase.h"
#include "ShinsenWidgetFishingResult.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetFishingResult : public UShinsenWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FishID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableFising;
    
    UShinsenWidgetFishingResult();
};

