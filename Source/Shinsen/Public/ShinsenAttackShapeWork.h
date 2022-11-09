#pragma once
#include "CoreMinimal.h"
#include "ShinsenCharacterCollisionShape.h"
#include "ShinsenAttackShapeWork.generated.h"

class UShinsenCollisionAttackComponent;

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenAttackShapeWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShinsenCollisionAttackComponent* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollisionAttackId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterCollisionShape Shape;
    
    FShinsenAttackShapeWork();
};

