#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EKeySettings.h"
#include "ButtonAndText.generated.h"

USTRUCT(BlueprintType)
struct FButtonAndText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeySettings SettingID;
    
    SHINSEN_API FButtonAndText();
};

