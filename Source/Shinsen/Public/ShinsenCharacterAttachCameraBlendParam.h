#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "ShinsenCharacterAttachCameraBlendParam.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenCharacterAttachCameraBlendParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EViewTargetBlendFunction> BlendFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendExp;
    
    FShinsenCharacterAttachCameraBlendParam();
};

