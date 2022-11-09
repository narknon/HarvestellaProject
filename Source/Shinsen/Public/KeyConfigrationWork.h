#pragma once
#include "CoreMinimal.h"
#include "EKeySettings.h"
#include "InputCoreTypes.h"
#include "KeyConfigrationWork.generated.h"

USTRUCT(BlueprintType)
struct FKeyConfigrationWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeySettings SettingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey GamepadKey;
    
    SHINSEN_API FKeyConfigrationWork();
};

