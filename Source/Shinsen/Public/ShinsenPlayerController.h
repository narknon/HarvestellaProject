#pragma once
#include "CoreMinimal.h"
#include "LwSysPlayerController.h"
#include "EForceFeedbackType.h"
#include "ShinsenInterface_PlayerController.h"
#include "ShinsenPlayerController.generated.h"

class ULwSysInputAxis;
class ULwSysInputAction;

UCLASS(Blueprintable)
class SHINSEN_API AShinsenPlayerController : public ALwSysPlayerController, public IShinsenInterface_PlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionDebugMenuOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionDebugMenuShortcut1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionDebugMenuPageNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionDebugMenuPagePrev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionDebugMenuValueFastL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionDebugMenuValueFastR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionDebugMenuValueInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionDebugControlMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionDebugControlModeButtonU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionDebugControlModeButtonD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionDebugControlModeButtonL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionDebugControlModeButtonR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionDebugControlModePadU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionDebugControlModePadD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionDebugControlModePadL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionDebugControlModePadR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionDebugPlayerClimbHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionDebugCharacterSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCameraReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterDodge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterButtonShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterSkillU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterSkillL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterSkillB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterSkillR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterJobU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterJobL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterJobB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterJobR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterLockOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterLockOnNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterLockOnPrev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterSpecial1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterSpecial2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterFarmAction1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterFarmAction2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterFarmAction3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterFarmAction4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterFarmToolShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterFarmToolU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterFarmToolD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterFarmToolL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterFarmToolR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterFarmFacilityRotL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterFarmFacilityRotR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterEventCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterEventSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterItemSelectNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterItemSelectPrev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterItemPageNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterItemPagePrev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterItemUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionCharacterPetAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionMinimapDispChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAxis* InputAxisCameraYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAxis* InputAxisCameraPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAxis* InputAxisCameraYawMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAxis* InputAxisCameraPitchMouse;
    
    AShinsenPlayerController();
    UFUNCTION(BlueprintCallable)
    void StopForceFeedback();
    
    UFUNCTION(BlueprintCallable)
    void SetEnableForceFeedback(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetSleepMessage();
    
    UFUNCTION(BlueprintCallable)
    void PlayForceFeedbackType(EForceFeedbackType Type, float Time);
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableForceFeedback();
    
    
    // Fix for true pure virtual functions not being implemented
};

