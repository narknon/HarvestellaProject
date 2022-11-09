#pragma once
#include "CoreMinimal.h"
#include "ShinsenKawaiiPhysicsAlpha.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenKawaiiPhysicsAlpha {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    FShinsenKawaiiPhysicsAlpha();
};

