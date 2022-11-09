#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EKeySettings.h"
#include "InputCoreTypes.h"
#include "OptionKeySettings.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FOptionKeySettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeySettings SettingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoChange1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoChange2;
    
    FOptionKeySettings();
};

