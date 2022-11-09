#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ShinsenInterfaceNative_AnimInstance.generated.h"

class UShinsenAnimInstance_Job;
class UShinsenAnimInstance_BasePose;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class SHINSEN_API UShinsenInterfaceNative_AnimInstance : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterfaceNative_AnimInstance : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual UShinsenAnimInstance_Job* GetAnimInstanceJob() const PURE_VIRTUAL(GetAnimInstanceJob, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual UShinsenAnimInstance_BasePose* GetAnimInstanceBasePose() const PURE_VIRTUAL(GetAnimInstanceBasePose, return NULL;);
    
};

