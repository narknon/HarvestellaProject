#pragma once
#include "CoreMinimal.h"
#include "EDirectInputPadKeyNames.h"
#include "DIGamePadKeyState.generated.h"

USTRUCT(BlueprintType)
struct DIRECTINPUTPADPLUGIN_API FDIGamePadKeyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EDirectInputPadKeyNames> KeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FDIGamePadKeyState();
};

