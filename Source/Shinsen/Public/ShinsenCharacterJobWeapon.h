#pragma once
#include "CoreMinimal.h"
#include "ShinsenCharacterJobWeaponAttachParticle.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenCharacterJobWeapon.generated.h"

class UStaticMesh;
class USkeletalMesh;
class UAnimInstance;

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenCharacterJobWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenCharacterJobWeaponAttachParticle> AttachEffects;
    
    FShinsenCharacterJobWeapon();
};

