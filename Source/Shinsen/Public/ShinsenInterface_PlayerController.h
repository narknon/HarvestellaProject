#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ShinsenInterface_PlayerController.generated.h"

class ULwSysInputAxis;
class ULwSysInputAction;

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_PlayerController : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_PlayerController : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDebugShiftSpawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDebugShiftCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAxis* GetInputAxisCameraYawMouse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAxis* GetInputAxisCameraYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAxis* GetInputAxisCameraPitchMouse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAxis* GetInputAxisCameraPitch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionSprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionMinimapDispChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionDebugMenuValueInit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionDebugMenuValueFastR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionDebugMenuValueFastL() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionDebugMenuShortcut1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionDebugMenuPagePrev() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionDebugMenuPageNext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionDebugMenuOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionDebugControlModePadU() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionDebugControlModePadR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionDebugControlModePadL() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionDebugControlModePadD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionDebugControlModeButtonU() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionDebugControlModeButtonR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionDebugControlModeButtonL() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionDebugControlModeButtonD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionDebugControlMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterSpecial2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterSpecial1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterSkillU() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterSkillR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterSkillL() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterSkillB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterPetAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterLockOnPrev() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterLockOnNext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterLockOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterJobU() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterJobR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterJobL() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterJobB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterItemUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterItemSelectPrev() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterItemSelectNext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterItemPagePrev() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterItemPageNext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterFarmActionExpand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterFarmAction4() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterFarmAction3() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterFarmAction2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterFarmAction1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterEventSkip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterEventCancel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterButtonShift() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCharacterAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionCameraReset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableAutoManageActiveCameraTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisableAutoManageActiveCameraTarget();
    
};

