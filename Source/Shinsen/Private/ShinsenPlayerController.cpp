#include "ShinsenPlayerController.h"
#include "LwSysInputAction.h"
#include "LwSysInputAxis.h"

void AShinsenPlayerController::StopForceFeedback() {
}

void AShinsenPlayerController::SetEnableForceFeedback(bool bEnable) {
}


void AShinsenPlayerController::PlayForceFeedbackType(EForceFeedbackType Type, float Time) {
}

bool AShinsenPlayerController::IsEnableForceFeedback() {
    return false;
}

AShinsenPlayerController::AShinsenPlayerController() {
    this->InputActionDebugMenuOn = CreateDefaultSubobject<ULwSysInputAction>(TEXT("DebugMenuOn"));
    this->InputActionDebugMenuShortcut1 = CreateDefaultSubobject<ULwSysInputAction>(TEXT("DebugMenuShortcut1"));
    this->InputActionDebugMenuPageNext = CreateDefaultSubobject<ULwSysInputAction>(TEXT("DebugMenuPageNext"));
    this->InputActionDebugMenuPagePrev = CreateDefaultSubobject<ULwSysInputAction>(TEXT("DebugMenuPagePrev"));
    this->InputActionDebugMenuValueFastL = CreateDefaultSubobject<ULwSysInputAction>(TEXT("DebugMenuValueFastL"));
    this->InputActionDebugMenuValueFastR = CreateDefaultSubobject<ULwSysInputAction>(TEXT("DebugMenuValueFastR"));
    this->InputActionDebugMenuValueInit = CreateDefaultSubobject<ULwSysInputAction>(TEXT("DebugMenuValueInit"));
    this->InputActionDebugControlMode = CreateDefaultSubobject<ULwSysInputAction>(TEXT("DebugControlMode"));
    this->InputActionDebugControlModeButtonU = CreateDefaultSubobject<ULwSysInputAction>(TEXT("DebugControlModeButtonU"));
    this->InputActionDebugControlModeButtonD = CreateDefaultSubobject<ULwSysInputAction>(TEXT("DebugControlModeButtonD"));
    this->InputActionDebugControlModeButtonL = CreateDefaultSubobject<ULwSysInputAction>(TEXT("DebugControlModeButtonL"));
    this->InputActionDebugControlModeButtonR = CreateDefaultSubobject<ULwSysInputAction>(TEXT("DebugControlModeButtonR"));
    this->InputActionDebugControlModePadU = CreateDefaultSubobject<ULwSysInputAction>(TEXT("DebugControlModePadU"));
    this->InputActionDebugControlModePadD = CreateDefaultSubobject<ULwSysInputAction>(TEXT("DebugControlModePadD"));
    this->InputActionDebugControlModePadL = CreateDefaultSubobject<ULwSysInputAction>(TEXT("DebugControlModePadL"));
    this->InputActionDebugControlModePadR = CreateDefaultSubobject<ULwSysInputAction>(TEXT("DebugControlModePadR"));
    this->InputActionDebugPlayerClimbHigh = CreateDefaultSubobject<ULwSysInputAction>(TEXT("DebugPlayerClimbHigh"));
    this->InputActionDebugCharacterSprint = CreateDefaultSubobject<ULwSysInputAction>(TEXT("DebugCharacterSprint"));
    this->InputActionCameraReset = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CameraReset"));
    this->InputActionCharacterSprint = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterSprint"));
    this->InputActionCharacterDodge = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterDodge"));
    this->InputActionCharacterJump = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterJump"));
    this->InputActionCharacterAction = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterAction"));
    this->InputActionCharacterAttack = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterAttack"));
    this->InputActionCharacterButtonShift = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterButtonShift"));
    this->InputActionCharacterSkillU = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterSkillU"));
    this->InputActionCharacterSkillL = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterSkillL"));
    this->InputActionCharacterSkillB = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterSkillB"));
    this->InputActionCharacterSkillR = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterSkillR"));
    this->InputActionCharacterJobU = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterJobU"));
    this->InputActionCharacterJobL = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterJobL"));
    this->InputActionCharacterJobB = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterJobB"));
    this->InputActionCharacterJobR = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterJobR"));
    this->InputActionCharacterLockOn = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterLockOn"));
    this->InputActionCharacterLockOnNext = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterLockOnNext"));
    this->InputActionCharacterLockOnPrev = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterLockOnPrev"));
    this->InputActionCharacterSpecial1 = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterSpecial1"));
    this->InputActionCharacterSpecial2 = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterSpecial2"));
    this->InputActionCharacterFarmAction1 = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterFarmAction1"));
    this->InputActionCharacterFarmAction2 = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterFarmAction2"));
    this->InputActionCharacterFarmAction3 = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterFarmAction3"));
    this->InputActionCharacterFarmAction4 = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterFarmAction4"));
    this->InputActionCharacterFarmToolShift = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterFarmToolShift"));
    this->InputActionCharacterFarmToolU = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterFarmToolU"));
    this->InputActionCharacterFarmToolD = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterFarmToolD"));
    this->InputActionCharacterFarmToolL = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterFarmToolL"));
    this->InputActionCharacterFarmToolR = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterFarmToolR"));
    this->InputActionCharacterFarmFacilityRotL = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterFarmFacilityRotL"));
    this->InputActionCharacterFarmFacilityRotR = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterFarmFacilityRotR"));
    this->InputActionCharacterEventCancel = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterEventCancel"));
    this->InputActionCharacterEventSkip = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterEventSkip"));
    this->InputActionCharacterItemSelectNext = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterItemSelectNext"));
    this->InputActionCharacterItemSelectPrev = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterItemSelectPrev"));
    this->InputActionCharacterItemPageNext = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterItemPageNext"));
    this->InputActionCharacterItemPagePrev = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterItemPagePrev"));
    this->InputActionCharacterItemUse = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterItemUse"));
    this->InputActionCharacterVehicle = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterVehicle"));
    this->InputActionCharacterPetAction = CreateDefaultSubobject<ULwSysInputAction>(TEXT("CharacterPetAction"));
    this->InputActionMinimapDispChange = CreateDefaultSubobject<ULwSysInputAction>(TEXT("MinimapDispChange"));
    this->InputAxisCameraYaw = CreateDefaultSubobject<ULwSysInputAxis>(TEXT("TurnRate"));
    this->InputAxisCameraPitch = CreateDefaultSubobject<ULwSysInputAxis>(TEXT("LookUpRate"));
    this->InputAxisCameraYawMouse = CreateDefaultSubobject<ULwSysInputAxis>(TEXT("TurnRateMouse"));
    this->InputAxisCameraPitchMouse = CreateDefaultSubobject<ULwSysInputAxis>(TEXT("LookUpRateMouse"));
}

