#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ShinsenInterface_AnimInstance.h"
#include "ShinsenInterfaceNative_AnimInstance.h"
#include "ShinsenAnimInstance_Weapon.generated.h"

class UShinsenAnimInstance_Job;
class UShinsenAnimInstance_BasePose;

UCLASS(Blueprintable, NonTransient)
class SHINSEN_API UShinsenAnimInstance_Weapon : public UAnimInstance, public IShinsenInterface_AnimInstance, public IShinsenInterfaceNative_AnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GunAlphaLever;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GunAlphaHammer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GunAlphaTrigger;
    
    UShinsenAnimInstance_Weapon();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    UShinsenAnimInstance_Job* GetAnimInstanceJob() const override PURE_VIRTUAL(GetAnimInstanceJob, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UShinsenAnimInstance_BasePose* GetAnimInstanceBasePose() const override PURE_VIRTUAL(GetAnimInstanceBasePose, return NULL;);
    
};

