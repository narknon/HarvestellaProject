#pragma once
#include "CoreMinimal.h"
#include "EKeySettings.h"
#include "InputCoreTypes.h"
#include "KeyConfigration.generated.h"

USTRUCT(BlueprintType)
struct FKeyConfigration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeySettings SettingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key2;
    
    SHINSEN_API FKeyConfigration();
};

