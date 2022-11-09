#include "ShinsenAnimInstance_BasePose.h"

class UAnimSequence;
class UAnimMontage;

void UShinsenAnimInstance_BasePose::StartEndTurn() {
}

UAnimMontage* UShinsenAnimInstance_BasePose::PlaySlotAnimationAsDynamicMontageLoop(UAnimSequence* InAsset, FName InSlotName, float InBlendInTime, float InBlendOutTime, float InPlayRate) {
    return NULL;
}

void UShinsenAnimInstance_BasePose::LeftWalkStop() {
}

void UShinsenAnimInstance_BasePose::LeftRunStop() {
}

void UShinsenAnimInstance_BasePose::LeftJumpUp() {
}

void UShinsenAnimInstance_BasePose::LeftJumpLand() {
}

void UShinsenAnimInstance_BasePose::LeftDashStop() {
}

void UShinsenAnimInstance_BasePose::EnteredWalkStop() {
}

void UShinsenAnimInstance_BasePose::EnteredTurn() {
}

void UShinsenAnimInstance_BasePose::EnteredRunStop() {
}

void UShinsenAnimInstance_BasePose::EnteredJumpUp() {
}

void UShinsenAnimInstance_BasePose::EnteredJumpLand() {
}

void UShinsenAnimInstance_BasePose::EnteredJumpFall() {
}

void UShinsenAnimInstance_BasePose::EnteredIdle() {
}

void UShinsenAnimInstance_BasePose::EnteredDashStop() {
}

void UShinsenAnimInstance_BasePose::EndTurn() {
}

UShinsenAnimInstance_BasePose::UShinsenAnimInstance_BasePose() {
    this->JumpLandCancelInputLength = 0.05f;
    this->JumpLandCancelAnimTime = 0.10f;
    this->MoveStopCancelInputLength = 0.05f;
    this->MoveStopStartInputLength = 0.10f;
    this->WalkStopVelocity = 200.00f;
    this->RunStopVelocity = 700.00f;
    this->DashStopVelocity = 900.00f;
    this->SpeedScale = 0.00f;
    this->SpeedScaleSpeed = 0.00f;
    this->SpeedScaleDirection = 0.00f;
    this->SpeedAIClampMin = 0.10f;
    this->bLockDir = false;
    this->bLockDirIdle = false;
    this->bBlendWalkToIdle = false;
    this->TargetSpeedScaleSpeed = 0.00f;
    this->TargetSpeedScaleDirection = 0.00f;
    this->SpeedInterpolationTime = 3.00f;
    this->LeanRate = 0.00f;
    this->TargetLeanRate = 0.00f;
    this->LeanMultiplier = 10000.00f;
    this->LeanInterpolationTime = 2.50f;
    this->BsStartPosition = 0.86f;
    this->RigidBodyAlpha = 1.00f;
    this->bTurn = false;
    this->bTurnRequest = false;
    this->TurnRot = 0.00f;
    this->TurnAnimPlayRate = 0.00f;
    this->bJumpStartRequest = false;
    this->bJumpUpRequest = false;
    this->bJumpUpEnd = false;
    this->bJumpFallRequest = false;
    this->JumpFallingTime = 0.00f;
    this->bJumpLandEnd = false;
    this->bWalkStopRequest = false;
    this->bWalkStopEnd = false;
    this->bRunStopRequest = false;
    this->bRunStopEnd = false;
    this->bDashStopRequest = false;
    this->bDashStopEnd = false;
    this->LookAlpha = 0.00f;
    this->LookInterpolationTime = 1.00f;
    this->LookAtClamp = 45.00f;
    this->LookAlphaSub = 0.00f;
    this->LookAlphaSubMultiplier = 1.00f;
    this->bLookEnabled = false;
    this->LookTime = 0.00f;
    this->LookTimeMax = 0.00f;
    this->LookRate = 0.00f;
    this->LookRateDelta = 0.00f;
    this->LookBlendRate = 0.00f;
    this->bLookFaceRotationMoving = false;
    this->LookEventActor = NULL;
    this->bLookFaceMoving2Points = false;
    this->LookRollStart = 0.00f;
    this->LookRollGoal = 0.00f;
    this->bLookRestoreTickEnabled = false;
    this->LookSocketName = TEXT("head_attach");
    this->AutoLookLerpSpeed = 10.00f;
    this->bEyeEnabled = true;
    this->EyeInterval = 3.00f;
    this->EyeAnimTime = 0.06f;
    this->EyeCloseWait = 0.00f;
    this->EyeCloseL = TEXT("EyeClose_L");
    this->EyeCloseR = TEXT("EyeClose_R");
    this->DyingHpRate = 0.20f;
    this->DyingLerpSpeed = 2.00f;
    this->DyingAlpha = 0.00f;
    this->bBattle = false;
    this->bFalling = false;
    this->bMontagePlaying = false;
    this->bEnabledBrakeAnimation = false;
    this->SequenceWalkStop = NULL;
    this->SequenceRunStop = NULL;
    this->SequenceDashStop = NULL;
    this->BlendSpaceAllDir = NULL;
}

