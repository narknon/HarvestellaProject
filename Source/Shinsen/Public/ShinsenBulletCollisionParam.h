#pragma once
#include "CoreMinimal.h"
#include "ShinsenCharacterCollisionParam.h"
#include "ShinsenBulletCollisionParam.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenBulletCollisionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeginTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterCollisionParam Param;
    
    FShinsenBulletCollisionParam();
};

