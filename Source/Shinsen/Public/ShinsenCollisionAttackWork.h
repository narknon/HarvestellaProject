#pragma once
#include "CoreMinimal.h"
#include "ShinsenCharacterCollisionParam.h"
#include "ShinsenCollisionAttackWork.generated.h"

class UShinsenAttackSphereComponent;
class UShinsenAttackCapsuleComponent;

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenCollisionAttackWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UShinsenAttackSphereComponent*> Spheres;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UShinsenAttackCapsuleComponent*> Capsules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> HitDefenseIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterCollisionParam CollisionParam;
    
    FShinsenCollisionAttackWork();
};

