#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EShinsenEyeControl.h"
#include "ShinsenInterface_AnimInstance.generated.h"

class UBlendSpace;
class UAnimSequenceBase;
class UBlendSpaceBase;
class UAnimMontage;

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_AnimInstance : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_AnimInstance : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTurn(float InRot, float InPlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPropsDiaryOpen(bool bInOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLookAlphaSubMultiplier(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEyeEnabled(bool bInFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEyeControl(EShinsenEyeControl InEyeControl);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBlendSpaceTurn(UBlendSpace* InAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBlendSpaceIdleMove(UBlendSpaceBase* InAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimMontage* PlaySlotAnimationAsDynamicMontageStopFlag(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt, bool bStopAllMontages);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTurn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UBlendSpace* GetBlendSpaceTurn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UBlendSpaceBase* GetBlendSpaceIdleMove() const;
    
};

