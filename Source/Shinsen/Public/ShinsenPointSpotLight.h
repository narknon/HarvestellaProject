#pragma once
#include "CoreMinimal.h"
#include "ShinsenPointSpotLight.generated.h"

class UCurveFloat;
class ULightComponent;
class UCurveLinearColor;

USTRUCT(BlueprintType)
struct FShinsenPointSpotLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULightComponent* Light;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* LightColor;
    
    SHINSEN_API FShinsenPointSpotLight();
};

