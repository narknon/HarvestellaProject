#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenInterfaceNative_Character.generated.h"

class AShinsenCharacter;
class UShinsenAnimInstance_BasePose;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class SHINSEN_API UShinsenInterfaceNative_Character : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterfaceNative_Character : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetWidgetField3dGaugeTargetOffset(FVector Offset) PURE_VIRTUAL(SetWidgetField3dGaugeTargetOffset,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetWidgetField3dGaugeEnabled(bool Enabled) PURE_VIRTUAL(SetWidgetField3dGaugeEnabled,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetWidgetField3dGaugeChildOffset(FVector Offset) PURE_VIRTUAL(SetWidgetField3dGaugeChildOffset,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsWidgetField3dGaugeEnabled() const PURE_VIRTUAL(IsWidgetField3dGaugeEnabled, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetWidgetField3dGaugeTargetOffset() PURE_VIRTUAL(GetWidgetField3dGaugeTargetOffset, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual void GetWidgetField3dGaugeTargetCharacter(AShinsenCharacter*& OutCharacter, bool& bOutLockOn, AShinsenCharacter* CandidateCharacter) PURE_VIRTUAL(GetWidgetField3dGaugeTargetCharacter,);
    
    UFUNCTION(BlueprintCallable)
    virtual FName GetWidgetField3dGaugeSocketname() PURE_VIRTUAL(GetWidgetField3dGaugeSocketname, return NAME_None;);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetWidgetField3dGaugeChildOffset() PURE_VIRTUAL(GetWidgetField3dGaugeChildOffset, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual UShinsenAnimInstance_BasePose* GetAnimInstanceBasePose() const PURE_VIRTUAL(GetAnimInstanceBasePose, return NULL;);
    
};

