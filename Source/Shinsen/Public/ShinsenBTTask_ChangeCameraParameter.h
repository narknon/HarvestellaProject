#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShinsenMapParameterStruct.h"
#include "ShinsenBTTask_ChangeCameraParameter.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_ChangeCameraParameter : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMapParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenMapParameterStruct CameraSettings;
    
    UShinsenBTTask_ChangeCameraParameter();
};

