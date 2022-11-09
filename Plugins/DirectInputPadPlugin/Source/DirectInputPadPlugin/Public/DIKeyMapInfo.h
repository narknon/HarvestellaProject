#pragma once
#include "CoreMinimal.h"
#include "EDirectInputPadKeyNames.h"
#include "DIKeyMapInfo.generated.h"

USTRUCT(BlueprintType)
struct DIRECTINPUTPADPLUGIN_API FDIKeyMapInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EDirectInputPadKeyNames> eDIKey_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNegative_;
    
    FDIKeyMapInfo();
};

