#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ShinsenInterface_AnimInstance.h"
#include "ShinsenInterfaceNative_AnimInstance.h"
#include "ShinsenAnimInstanceBasePoseArg.h"
#include "ShinsenAnimInstance_LookAtResult.h"
#include "ShinsenKawaiiPhysicsAlpha.h"
#include "ShinsenConstraintAlpha.h"
#include "ShinsenAnimInstance.generated.h"

class USQEXSEADSoundBank;
class UShinsenAnimInstance_Job;
class UShinsenAnimInstance_BasePose;

UCLASS(Blueprintable, NonTransient)
class SHINSEN_API UShinsenAnimInstance : public UAnimInstance, public IShinsenInterface_AnimInstance, public IShinsenInterfaceNative_AnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenAnimInstanceBasePoseArg BasePoseArg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenAnimInstanceBasePoseArg BasePoseArgBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenKawaiiPhysicsAlpha> KawaiiPhysicsAlphas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenConstraintAlpha> ConstraintAlphas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundBank* IdleSeSoundBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundBank* MoveSeSoundBank;
    
    UShinsenAnimInstance();
protected:
    UFUNCTION(BlueprintCallable)
    void SetMoveLoopSe(USQEXSEADSoundBank* Idle, USQEXSEADSoundBank* Move);
    
    UFUNCTION(BlueprintCallable)
    void SetCanUpdateMoveLoopSe(const bool bFlag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FShinsenAnimInstance_LookAtResult GetLookAtResult(const int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishMoveLoopSe();
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    UShinsenAnimInstance_Job* GetAnimInstanceJob() const override PURE_VIRTUAL(GetAnimInstanceJob, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UShinsenAnimInstance_BasePose* GetAnimInstanceBasePose() const override PURE_VIRTUAL(GetAnimInstanceBasePose, return NULL;);
    
};

