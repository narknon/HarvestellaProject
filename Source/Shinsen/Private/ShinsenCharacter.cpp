#include "ShinsenCharacter.h"
#include "ShinsenSpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "ShinsenCollisionAttackComponent.h"
#include "ShinsenCharacterTimerComponent.h"
#include "Perception/PawnSensingComponent.h"

class USkeletalMeshComponent;
class UStaticMeshComponent;
class USkeletalMesh;
class UPrimitiveComponent;
class UAnimMontage;
class APawn;
class UAnimInstance;
class AActor;
class AShinsenCharacter;
class ANavigationData;

void AShinsenCharacter::UpdateScriptActionWait(float DeltaSeconds) {
}

void AShinsenCharacter::TimeHourChanged_Implementation() {
}

void AShinsenCharacter::StopSimpleAnimMontage(float InBlendOutTime) {
}


void AShinsenCharacter::SetupCharacterMesh(USkeletalMeshComponent* InMesh) {
}

void AShinsenCharacter::SetupAttachStaticMesh(UStaticMeshComponent* InMesh) {
}

void AShinsenCharacter::SetupAttachSkeletalMesh(USkeletalMeshComponent* InMesh) {
}


void AShinsenCharacter::SetSafeFolderPath(const FName& NewFolderPath) {
}

void AShinsenCharacter::SetSafeActorLabel(const FString& InNewActorLabel, bool InMarkDirty) {
}

void AShinsenCharacter::SetRotationRateYaw(float Rate) {
}

void AShinsenCharacter::SetPhase(const FName KeyName, const int32 PhaseNum) {
}

void AShinsenCharacter::SetFarmWeaponMesh(USkeletalMesh* SkeletalMesh) {
}

void AShinsenCharacter::SetDebugMoveDisable(bool bFlag) {
}

void AShinsenCharacter::SetCharacterMode_Implementation(ECharacterMode InMode) {
}

void AShinsenCharacter::SetBattleEvent(const bool bSetBattleEvent) {
}

void AShinsenCharacter::setAnimEyeForceClose(bool bInFlag) {
}

void AShinsenCharacter::SetAddStatusEffectForBattleEvent(const FString& InCharStatusEffectID) {
}

void AShinsenCharacter::SearchScriptActor() {
}

void AShinsenCharacter::ResetRotationRateYaw() {
}

void AShinsenCharacter::PlaySimpleAnimMontage(UAnimMontage* InMontage) {
}


void AShinsenCharacter::OnSensingSee(APawn* InPawn) {
}

void AShinsenCharacter::OnSensingHear(APawn* InInstigator, const FVector& InLocation, float InVolume) {
}

void AShinsenCharacter::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AShinsenCharacter::OnFinishedDynamicDead() {
}

void AShinsenCharacter::KillMySelf() {
}

void AShinsenCharacter::JumpSectionSimpleAnimMontage(FName InSection) {
}

bool AShinsenCharacter::IsScript() const {
    return false;
}

bool AShinsenCharacter::isRootMotionActiveLow() const {
    return false;
}

bool AShinsenCharacter::isRootMotionActiveHigh() const {
    return false;
}

bool AShinsenCharacter::isRootMotionActive() const {
    return false;
}

bool AShinsenCharacter::IsInsideView(FVector InTargetPos, float InDegRange) {
    return false;
}

bool AShinsenCharacter::IsFieldActionEnable() {
    return false;
}


bool AShinsenCharacter::IsFarmActionEnable(bool bCheckPlayMontage) {
    return false;
}


bool AShinsenCharacter::isCommonAvailable() const {
    return false;
}

bool AShinsenCharacter::IsBattleEvent() const {
    return false;
}

bool AShinsenCharacter::IsAnimMontagePlaying() const {
    return false;
}

void AShinsenCharacter::InputVehicle_Implementation() {
}

void AShinsenCharacter::InputTurnAtRateMouse_Implementation(float Rate) {
}

void AShinsenCharacter::InputTurnAtRate_Implementation(float Rate) {
}

void AShinsenCharacter::InputSprintReleased_Implementation() {
}

void AShinsenCharacter::InputSprint_Implementation() {
}

void AShinsenCharacter::InputSpecial2_Implementation() {
}

void AShinsenCharacter::InputSpecial1_Implementation() {
}

void AShinsenCharacter::InputSkillUReleased_Implementation() {
}

void AShinsenCharacter::InputSkillU_Implementation() {
}

void AShinsenCharacter::InputSkillRReleased_Implementation() {
}

void AShinsenCharacter::InputSkillR_Implementation() {
}

void AShinsenCharacter::InputSkillLReleased_Implementation() {
}

void AShinsenCharacter::InputSkillL_Implementation() {
}

void AShinsenCharacter::InputSkillBReleased_Implementation() {
}

void AShinsenCharacter::InputSkillB_Implementation() {
}

void AShinsenCharacter::InputPetAction_Implementation() {
}

void AShinsenCharacter::InputMoveRight_Implementation(float Value) {
}

void AShinsenCharacter::InputMoveForward_Implementation(float Value) {
}

void AShinsenCharacter::InputLookUpAtRateMouse_Implementation(float Rate) {
}

void AShinsenCharacter::InputLookUpAtRate_Implementation(float Rate) {
}

void AShinsenCharacter::InputLockOnPrev_Implementation() {
}

void AShinsenCharacter::InputLockOnNext_Implementation() {
}

void AShinsenCharacter::InputLockOn_Implementation() {
}

void AShinsenCharacter::InputJump_Implementation() {
}

void AShinsenCharacter::InputJobU_Implementation() {
}

void AShinsenCharacter::InputJobR_Implementation() {
}

void AShinsenCharacter::InputJobL_Implementation() {
}

void AShinsenCharacter::InputJobB_Implementation() {
}

void AShinsenCharacter::InputItemUse_Implementation() {
}

void AShinsenCharacter::InputItemSelectPrev_Implementation() {
}

void AShinsenCharacter::InputItemSelectNext_Implementation() {
}

void AShinsenCharacter::InputItemPagePrev_Implementation() {
}

void AShinsenCharacter::InputItemPageNext_Implementation() {
}

void AShinsenCharacter::InputFarmToolU_Implementation() {
}

void AShinsenCharacter::InputFarmToolShiftReleased_Implementation() {
}

void AShinsenCharacter::InputFarmToolShift_Implementation() {
}

void AShinsenCharacter::InputFarmToolR_Implementation() {
}

void AShinsenCharacter::InputFarmToolL_Implementation() {
}

void AShinsenCharacter::InputFarmToolD_Implementation() {
}

void AShinsenCharacter::InputFarmFacilityRotR_Implementation() {
}

void AShinsenCharacter::InputFarmFacilityRotL_Implementation() {
}

void AShinsenCharacter::InputFarmAction4Released_Implementation() {
}

void AShinsenCharacter::InputFarmAction4_Implementation() {
}

void AShinsenCharacter::InputFarmAction3Released_Implementation() {
}

void AShinsenCharacter::InputFarmAction3_Implementation() {
}

void AShinsenCharacter::InputFarmAction2Released_Implementation() {
}

void AShinsenCharacter::InputFarmAction2_Implementation() {
}

void AShinsenCharacter::InputFarmAction1Released_Implementation() {
}

void AShinsenCharacter::InputFarmAction1_Implementation() {
}

void AShinsenCharacter::InputDodge_Implementation() {
}

void AShinsenCharacter::InputDebugSprint_Implementation() {
}

void AShinsenCharacter::InputDebugSpawnSkeletalMeshSpawn_Implementation() {
}

void AShinsenCharacter::InputDebugSpawnSkeletalMeshPrev_Implementation() {
}

void AShinsenCharacter::InputDebugSpawnSkeletalMeshNext_Implementation() {
}

void AShinsenCharacter::InputDebugSpawnSkeletalMeshDestroy_Implementation() {
}

void AShinsenCharacter::InputDebugPlayerSkeletalMeshPrev_Implementation() {
}

void AShinsenCharacter::InputDebugPlayerSkeletalMeshNext_Implementation() {
}

void AShinsenCharacter::InputDebugPlayerSkeletalMeshClear_Implementation() {
}

void AShinsenCharacter::InputDebugPlayerSkeletalMeshChange_Implementation() {
}

void AShinsenCharacter::InputDebugPlayerClimbHighReleased_Implementation() {
}

void AShinsenCharacter::InputDebugPlayerClimbHigh_Implementation() {
}

void AShinsenCharacter::InputDebugControlModeReleased_Implementation() {
}

void AShinsenCharacter::InputDebugControlModePrev_Implementation() {
}

void AShinsenCharacter::InputDebugControlModeNext_Implementation() {
}

void AShinsenCharacter::InputDebugControlMode_Implementation() {
}

void AShinsenCharacter::InputCameraReset_Implementation() {
}

void AShinsenCharacter::InputButtonShiftReleased_Implementation() {
}

void AShinsenCharacter::InputButtonShift_Implementation() {
}

void AShinsenCharacter::InputAttackReleased_Implementation() {
}

void AShinsenCharacter::InputAttack_Implementation() {
}

void AShinsenCharacter::InputActionReleased_Implementation() {
}

void AShinsenCharacter::InputAction_Implementation() {
}


FString AShinsenCharacter::GetUID() const {
    return TEXT("");
}

AShinsenCharacter* AShinsenCharacter::GetPlayerTargetForFriendBatlleMode() {
    return NULL;
}

int32 AShinsenCharacter::GetPhase(const FName KeyName) {
    return 0;
}

ANavigationData* AShinsenCharacter::GetNavDataForAgentName(const FName AgentName) const {
    return NULL;
}


bool AShinsenCharacter::GetEnableGreetVoice() {
    return false;
}

FString AShinsenCharacter::GetCharID() const {
    return TEXT("");
}

UAnimInstance* AShinsenCharacter::GetAnimInstance() const {
    return NULL;
}


void AShinsenCharacter::EnableGreetVoice() {
}

void AShinsenCharacter::DisableGreetVoice() {
}

void AShinsenCharacter::DeferInputStopOfMovementUntilNextFrame(bool bFlag) {
}

void AShinsenCharacter::ClearStatusForFallASleep(bool bClearStatusEffect) {
}

void AShinsenCharacter::ClearFarmActionChargeEffect(bool bStopSe) {
}

bool AShinsenCharacter::CheckPressActionEx2() {
    return false;
}

bool AShinsenCharacter::CheckPressActionEx1() {
    return false;
}

bool AShinsenCharacter::CheckPressActionButton() {
    return false;
}

void AShinsenCharacter::BlendJumpSectionSimpleAnimMontage(FName InSection, float InBlendOutTime) {
}

int32 AShinsenCharacter::AddFieldActionItem(const FString& ItemId, int32 addNum) {
    return 0;
}

int32 AShinsenCharacter::AddAccessory(FAccessory Accessory) {
    return 0;
}

void AShinsenCharacter::AccelerationRotationYaw(float Time, float Rate) {
}

AShinsenCharacter::AShinsenCharacter() {
    this->MontageJobChange = NULL;
    this->MontageSpawn = NULL;
    this->BehaviorTreeField = NULL;
    this->BehaviorTreeBattle = NULL;
    this->AIPlayerFollowStartRadius = 800.00f;
    this->AIPlayerFollowAcceptanceRadius = 700.00f;
    this->AIPlayerFollowPoint1Angle = -45.00f;
    this->AIPlayerFollowPoint2Angle = 45.00f;
    this->AITerritoryReturnRadiusStart = 5000.00f;
    this->AITerritoryReturnRadiusEnd = 500.00f;
    this->AIDamageRadius = 0.00f;
    this->bAIOutOfNavimesh = false;
    this->AIPersonalSpaceInvadedDist = 250.00f;
    this->bAIForceOverrrideHeightWhenTargetedAttackMove = false;
    this->bBeginPlayToHideWeaponMeshes = true;
    this->FollowCameraTurnRate = 45.00f;
    this->FollowCameraLookUpRate = 45.00f;
    this->FollowCameraTurnRateLevel = 0;
    this->FollowCameraLookUpRateLevel = 0;
    this->bFollowCameraTurnReverse = false;
    this->bFollowCameraLookUpReverse = false;
    this->LockOnCameraOverrideTargetArmLength = 0.00f;
    this->LockOnCameraOverrideLagSpeed = 0.00f;
    this->LockOnCameraHeightOffset = 0.00f;
    this->LookSocket = TEXT("head_attach");
    this->WidgetField3dGaugeEnabled = true;
    this->bDrawInvisible = false;
    this->BattleEnemySearchRange = 3000.00f;
    this->bBattleAllwaysSearchTarget = false;
    this->BattleEnemyTargetedOverrideSearchRange = 0.00f;
    this->BattleHitEffectSocketName = TEXT("pelvis");
    this->BattleHitEffectOverrideRadius = 0.00f;
    this->BattleHitEffectRadiusMin = 10.00f;
    this->BattleHitEffectRadiusMax = 20.00f;
    this->bBattleHitEffectTraceCheck = false;
    this->bBattleKnockBackDisabled = false;
    this->BattleBlowSpeedXY = 1000.00f;
    this->BattleBlowSpeedZ = 800.00f;
    this->SkillParams.AddDefaulted(1);
    this->LandEffect = NULL;
    this->JobParams = NULL;
    this->EffectSocketScaleRoot = 1.00f;
    this->EffectSocketNamePelvis = TEXT("pelvis");
    this->EffectSocketScalePelvis = 1.00f;
    this->EffectSocketNameHead = TEXT("head_attach");
    this->EffectSocketScaleHead = 1.00f;
    this->TerritoryReturnParticle = NULL;
    this->BaseEyeHeightOverrideType = ECharacterBaseEyeHeightOverrideType::None;
    this->BaseEyeHeightOverrideValue = 64.00f;
    this->SensingIntervalValue = 0.10f;
    this->MeshBaseVisibleDistanceFactorThesholds.AddDefaulted(2);
    this->MeshMaxEvalRateForInterpolation = 4;
    this->MeshBaseNonRenderedUpdateRate = 20;
    this->bBossDynamicDead = false;
    this->CharacterSpawnType = ECharacterSpawnType::Npc;
    this->CharacterMode = ECharacterMode::Field;
    this->bPlayMontageSpawn = false;
    this->bWeaponMeshesVisibility = false;
    this->bStopAnimeRightFoot = false;
    this->CurrentIdleAnimType = EShinsenIdleAnimType::Default;
    this->FollowCameraBoom = CreateDefaultSubobject<UShinsenSpringArmComponent>(TEXT("FollowCameraBoom"));
    this->FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    this->AttachCamera = NULL;
    this->CollisionAttack = CreateDefaultSubobject<UShinsenCollisionAttackComponent>(TEXT("CollisionAttack"));
    this->CollisionDefenseId = 2;
    this->CharacterTimer = CreateDefaultSubobject<UShinsenCharacterTimerComponent>(TEXT("CharacterTimer"));
    this->InputBuffer = ECharacterInputBuffer::None;
    this->bInputBufferAccepting = false;
    this->PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
    this->bAITerritoryReturning = false;
    this->bAIEnemyBattleAreaCheck = false;
    this->bAIPlayerFollowTeleportEnabled = true;
    this->CharacterAIParameters = NULL;
    this->BattlePlayerAttackTarget = NULL;
    this->BattleCurrentSkillType = EMdCharJobBoardPanelSkillType::Attack;
    this->BattleCurrentSkillEnhancementParameterNum = 0;
    this->BattleCurrentSkillEnhancementComboNum = 0;
    this->bBattleNoDamage = false;
    this->bBattleNoDamageEffect = false;
    this->bBattleNoStatusEffect = false;
    this->bBattleIgnoreDamageReaction = false;
    this->bBattleIgnoreTarget = false;
    this->bBattleFieldDamageNumberForceHide = false;
    this->bBattleFieldGaugeEnemyForceHide = false;
    this->bBattleFieldBreakGaugeForceHide = false;
    this->bBattleAttackCancelEnabled = false;
    this->bBattleAttackCanceled = false;
    this->bBattleAttackPlaying = false;
    this->bBattlePlayerAttackHit = false;
    this->DamageKind = ECharacterDamageKind::None;
    this->ArmorLevelAnimNotify = ECharacterArmorLevel::None;
    this->ArmorLevelAI = ECharacterArmorLevel::None;
    this->DamageCutRate = 0;
    this->BattleCharmTarget = NULL;
    this->BattleFearTarget = NULL;
    this->JobB10Skill04Fairy = NULL;
    this->SearchLength = 65.00f;
    this->SearchRadius = 170.00f;
    this->TalkDistanceOffset = 0.00f;
    this->TalkExpandForwardDistanceOffset = 0.00f;
    this->TargetFieldItem = NULL;
    this->TargetFieldPicking = NULL;
    this->TargetScriptActor = NULL;
    this->ScriptActionWait = 0.00f;
    this->bUseDeadzoneMoveSpeed = false;
    this->DeadzoneMoveSpeed = 0.00f;
    this->JumpProhibitionTime = 0.00f;
    this->FarmChargeEmitter = NULL;
    this->FarmChargingEmitter = NULL;
    this->bYawLocked = false;
    this->bFarmMoveDisable = false;
    this->ParallelMoveEndDelayTime = 3.00f;
    this->FarmActionType = EFarmAction::PLOW;
    this->FarmLength = 100.00f;
    this->FarmActionChargeTime = 0.00f;
    this->FarmActionChargeLevel = 0;
    this->MinimapMarker = NULL;
    this->MinimapMarkerSubID = -1;
    this->VehicleType = EVehicleType::NONE;
    this->bFishing = false;
    this->bCanTryCatch = false;
    this->FishingPoint = NULL;
}

