#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ShinsenInterface_AnimInstance.h"
#include "ShinsenInterfaceNative_AnimInstance.h"
#include "ShinsenKawaiiPhysicsAlpha.h"
#include "ShinsenConstraintAlpha.h"
#include "ShinsenAnimInstance_Job.generated.h"

class UShinsenAnimInstance_Job;
class UShinsenAnimInstance_BasePose;

UCLASS(Blueprintable, NonTransient)
class SHINSEN_API UShinsenAnimInstance_Job : public UAnimInstance, public IShinsenInterface_AnimInstance, public IShinsenInterfaceNative_AnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenKawaiiPhysicsAlpha> KawaiiPhysicsAlphas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenConstraintAlpha> ConstraintAlphas;
    
    UShinsenAnimInstance_Job();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    UShinsenAnimInstance_Job* GetAnimInstanceJob() const override PURE_VIRTUAL(GetAnimInstanceJob, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UShinsenAnimInstance_BasePose* GetAnimInstanceBasePose() const override PURE_VIRTUAL(GetAnimInstanceBasePose, return NULL;);
    
};

