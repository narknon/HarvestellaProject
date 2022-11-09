#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CharacterStatusEffectInfo.h"
#include "EFarmAction.h"
#include "CharacterColorChangeGroup.h"
#include "EVehicleType.h"
#include "ECharacterRootMotion.h"
#include "EMapIconType.h"
#include "ECharacterInputBuffer.h"
#include "Components/SkeletalMeshComponent.h"
#include "UObject/NoExportTypes.h"
#include "CharacterStatus.h"
#include "ECharacterAttr.h"
#include "ECharacterSpawnType.h"
#include "ECharacterJobType.h"
#include "ShinsenCharacterJobSlot.h"
#include "ECharacterMode.h"
#include "ECharacterAIAttackTargetType.h"
#include "ShinsenInterface_Character.generated.h"

class AActor;
class UCurveFloat;
class UStaticMeshComponent;
class AShinsenRoutePoint;
class UPrimitiveComponent;
class AShinsenCharacter;
class UBehaviorTree;
class UObject;
class UAnimationAsset;
class APawn;
class UTexture2D;
class UShinsenCharacterVoiceComponent;
class UShinsenAnimNotifyVariableComponent;

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_Character : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_Character : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WateredFarmBlock();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMarkerSubID(int32 SubID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TurnToRotation(float InTime, float InRotationRate, const FRotator& InRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TurnToLocation(float InTime, float InRotationRate, const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TurnInterpToActor(AActor* InActor, float InDeltaTime, float InSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopSequenceCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StopMoveModeFly();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopFarmActionChargedFairyEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopFaceRotationRotSpeed(float RotSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopFaceRotation(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopColorChangeFromAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopColorChange(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopAIMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopAI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StatusRecovery();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StatusEffectRecovery();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartWeaponAlphaFadeOut(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartWeaponAlphaFadeIn(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartStagingForDeathNpc(float BlackTime, float FadeTime, float SpriteRate, float DustRate, float AuraRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartStagingForDeath(float BlackTime, float DissolveTime, FLinearColor DissolveColor, float SpriteRate, float DustRate, float AuraRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartMaterialDead();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartMaterialAppear();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartMasterAlphaFadeOut(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartMasterAlphaFadeIn(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartMasterAlphaFade(float StartRate, float EndRate, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartJumpInterval();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 StartFresnelColorFadeOut(FLinearColor Color, float Time, bool bForce, bool bWeaponOnly, float Exp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 StartFresnelColorFadeIn(FLinearColor Color, float Time, bool bForce, bool bWeaponOnly, float Exp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 StartFresnelColorFade(FLinearColor Color, float StartRate, float EndRate, float Time, bool bForce, bool bWeaponOnly, float Exp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 StartFresnelColorChangeRateCurveSimple(FLinearColor Color, UCurveFloat* Curve, bool bForce, bool bWeaponOnly, float Exp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 StartFresnelColorChangeRateCurve(FLinearColor Color, UCurveFloat* Curve, float Speed, float Multiplier, int32 LoopCount, bool bForce, bool bWeaponOnly, float Exp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 StartFresnelColorChangeRate(FLinearColor Color, float Rate, float Time, bool bForce, bool bWeaponOnly, float Exp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartFishing(AActor* FishingPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartFarmActionChargedFairyEffect(EFarmAction Action);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartColorChangeFromAnimation(const FCharacterColorChangeGroup& Param, bool bWeaponOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 StartColorChange(const FCharacterColorChangeGroup& Param, bool bForce, bool bWeaponOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartBlurEffect(float Time, float Amount, float Density, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 StartBaseColorFadeOut(FLinearColor Color, float Time, bool bForce, bool bWeaponOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 StartBaseColorFadeIn(FLinearColor Color, float Time, bool bForce, bool bWeaponOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 StartBaseColorFade(FLinearColor Color, float StartRate, float EndRate, float Time, bool bForce, bool bWeaponOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 StartBaseColorChangeRateCurve(FLinearColor Color, UCurveFloat* Curve, float Speed, int32 LoopCount, bool bForce, bool bWeaponOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 StartBaseColorChangeRate(FLinearColor Color, float Rate, float Time, bool bForce, bool bWeaponOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 StartAlphaFadeOut(float Time, bool bForce, bool bWeaponOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 StartAlphaFadeIn(float Time, bool bForce, bool bWeaponOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 StartAlphaFade(float StartRate, float EndRate, float Time, bool bForce, bool bWeaponOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 StartAlphaChangeRateCurveSimple(UCurveFloat* Curve, bool bForce, bool bWeaponOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 StartAlphaChangeRateCurve(UCurveFloat* Curve, float Speed, int32 LoopCount, bool bForce, bool bWeaponOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 StartAlphaChangeRate(float Rate, float Time, bool bForce, bool bWeaponOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWeaponMeshesVisibility(bool InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWalkSpeedMaxRate(float InRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWalkSpeedMax(float InWalkSpeedMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVehicleType(EVehicleType VehicleType, bool bAdjustLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSlipperyMoving(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSensingManual();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRootMotionMovementEnable(bool Enable, ECharacterRootMotion InRootMotion);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetQuestMarker(EMapIconType Type, bool bDisp, bool bDispSignBoard, FName QuestID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMoveModeFly(float FlyTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMon003BodyEmissivePower(float InVal, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMon003BodyEmissiveColor(FLinearColor InColor, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMeshMaterialVectorParamater(const FString& SlotName, const FString& ParamName, FVector Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMeshMaterialScalarParamater(const FString& SlotName, const FString& ParamName, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMasterAlphaRate(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInputBufferAccepting(bool InFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInputBuffer(ECharacterInputBuffer InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFollowCameraTurnReverse(bool Reverse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFollowCameraTurnRateLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFollowCameraTurnRate(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFollowCameraLookUpReverse(bool Reverse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFollowCameraLookUpRate(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFollowCameraLookUpLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFieldToBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFarmActionType(EFarmAction Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFaceRotationRotSpeed(FRotator Rotation, float RotSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFaceRotation(FRotator Rotation, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFaceLookLocationRotSpeed(FVector Location, float RotSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFaceLookLocation(FVector Location, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFaceLookCharacterRotSpeed(AShinsenCharacter* Character, float RotSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFaceLookCharacter(AShinsenCharacter* Character, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnemyMainTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableSprint(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableRotationYaw(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableMon003BodyEmissivePowerAutoWink(bool bInFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableHideCharacterByCameraDistance(bool bFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDefaultFriendBehaviorTree();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBattleToField();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBattleNoStatusEffect(bool bInFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBattleNoDamageEffect(bool bInFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBattleNoDamage(bool bInFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBattleIgnoreTarget(bool bInFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBattleIgnoreDamageReaction(bool bInFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBattleFieldGaugeEnemyForceHide(bool bInFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBattleFieldDamageNumberForceHide(bool bInFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBattleFieldBreakGaugeForceHide(bool bInFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAnimationMode(EAnimationMode::Type InAnimationMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAITerritoryReturning(bool bInFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetAIPlayerFollowTeleport(float InDistMin, float InDistMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAIEnemyWalkSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAIEnemyChaseSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAICrowdSimulationEnabled(bool InFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SearchFieldActionTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SaveCurrentTransformSubmarine();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SaveCurrentTransformAirShip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RunAIField();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RunAIBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RunAI(UBehaviorTree* InBehaviorTree);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResumeAI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RestartAI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetWalkSpeedMax();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetFollowCameraRotation(bool bInForceReset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetFarmActionCharge();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetAIPatrolIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveStatusEffectType(const FString& InCharStatusEffectTypeID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveStatusEffectManual(const FString& InCharStatusEffectID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveStatusEffect(const FString& InCharStatusEffectID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveFriend();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveCommonActionTarget(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReleaseAllInput();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayTurnAnimation(float Rotation, float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PlayThrowFishingFloat();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaySequenceCamera(const TSoftObjectPtr<UObject>& Sequence, AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaySeFarmSprinkle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PlayRiseFishingFloat(bool bIsHit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PlayFishingHitAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PlayFishingFailAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PlayFishingCatchAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayAnimation(UAnimationAsset* InAsset, bool bInLooping);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PauseColorChange(bool bPause);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PauseAI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MakeAINoise(float InLoudness);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsWeaponMeshesVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStatusStaminaZero() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStatusStaminaMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStatusRecoverableStamina() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStatusRecoverableHp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStatusHpMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStatusDpsGaugeActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStatusDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStatusBreaking34() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStatusBreaking23() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStatusBreaking12() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStatusBreakEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStatusBreak4Disp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStatusBreak3Disp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStatusBreak2Disp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStatusBreak1Disp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSprint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSpawnTypePlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSpawnTypeNpc() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSpawnTypeEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSlipperyMoving();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSkillEnabledU() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSkillEnabledR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSkillEnabledL() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSkillEnabledB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPlayingTurnAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsMoveModeFly();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsMoveEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsMonsterTypeFear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsMapChangeDisabledOnAirShip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLockOnTargetEnabled(APawn* InTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsJobParamsLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsJobChangeAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputBufferAccepting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFollowCameraTurnReverse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFollowCameraLookUpReverse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFishing();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFieldToBattleEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFalling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFaceRotationMoving();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsExistStatusEffectType(const FString& InCharStatusEffectTypeID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsExistStatusEffect(const FString& InCharStatusEffectID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEnableRotationYaw();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IsCommonActionTargetWithinRange(AActor* TargetActor, float RadiusOffset, bool& Return, float& Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IsCommonActionLocationWithinRange(FVector TargetLocation, float RadiusOffset, bool& Return, float& Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharacterModeField() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharacterModeFarm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharacterModeBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBattleToFieldEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBattleFieldGaugeEnemyForceHide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBattleFieldBreakGaugeForceHide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBattleAreaIds(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAttackPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAITerritoryReturnStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAITerritoryReturning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAIRunning();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAIPlayerFollowAcceptanceRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAIPersonalSpaceInvaded(float InDist) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAIPaused();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAIOutOfNavimesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAICrowdSimulationEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IncAIPatrolIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HealStatusStamina(int32 InAdd, bool bEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HealStatusHp(int32 InAdd, bool bEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UStaticMeshComponent* GetWeaponStaticMesheR();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UStaticMeshComponent* GetWeaponStaticMesheL();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UTexture2D*> GetWeakAttrIcons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetWalkSpeedMax(float& WalkSpeedMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetTimeElapseRateInWorldMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetStatusStomachRateS32() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetStatusStomachRateF32() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetStatusStaminaRate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetStatusNowStamina();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetStatusNowHp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetStatusNowBreakPoint4() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetStatusNowBreakPoint3() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetStatusNowBreakPoint2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetStatusNowBreakPoint1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FCharacterStatus GetStatusNow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetStatusMaxStamina();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetStatusMaxHp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetStatusMaxBreakPoint4() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetStatusMaxBreakPoint3() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetStatusMaxBreakPoint2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetStatusMaxBreakPoint1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FCharacterStatus GetStatusMax();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetStatusLevelString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetStatusHpRate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FCharacterStatusEffectInfo> GetStatusEffectInfos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UTexture2D*> GetStatusEffectIcons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetStatusDpsGaugeRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetStatusBreakTimer4Rate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetStatusBreakTimer3Rate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetStatusBreakTimer2Rate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetStatusBreakTimer1Rate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetStatusBreakPoint4Rate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECharacterAttr GetStatusBreakPoint4Attr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetStatusBreakPoint3Rate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECharacterAttr GetStatusBreakPoint3Attr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetStatusBreakPoint2Rate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECharacterAttr GetStatusBreakPoint2Attr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetStatusBreakPoint1Rate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECharacterAttr GetStatusBreakPoint1Attr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetStatusBreakNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetStatusBreakMulti() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetStatusBreakCenterNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FCharacterStatus GetStatusBase();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECharacterSpawnType GetSpawnType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetSpawnLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetSkillIconPathU() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetSkillIconPathR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetSkillIconPathL() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetSkillIconPathB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSkillCoolTimerRateU() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSkillCoolTimerRateR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSkillCoolTimerRateL() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSkillCoolTimerRateB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetSavedSubmarineTransform(FTransform& Transform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetSavedAirShipTransform(FTransform& Transform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetLookLocationAndRate(bool& bValid, FVector& Location, float& Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetLookAtParamater(bool& bValid, FVector& Location, float& Roll, float& Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AShinsenCharacter*> GetLockOnTargetCandidateArray();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECharacterJobType GetJobType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FShinsenCharacterJobSlot GetJobSlotU() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FShinsenCharacterJobSlot GetJobSlotR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FShinsenCharacterJobSlot GetJobSlotL() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetJobSlotCoolTimerRateU() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetJobSlotCoolTimerRateR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetJobSlotCoolTimerRateL() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetJobSlotCoolTimerRateB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FShinsenCharacterJobSlot GetJobSlotB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECharacterInputBuffer GetInputBuffer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetFollowCameraTurnRateLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetFollowCameraTurnRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetFollowCameraLookUpRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetFollowCameraLookUpLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetFishingStamina() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EFarmAction GetFarmActionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetFarmActionStamina(EFarmAction Action) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetFarmActionChargeLevelMax(EFarmAction Action, int32& MaxLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UPrimitiveComponent*> GetEnemyPushBackCollisions();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetCommonActionTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCollisionRadius(const AActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetCharName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UShinsenCharacterVoiceComponent* GetCharacterVoiceComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECharacterMode GetCharacterMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AShinsenCharacter* GetBattleTargetAI(const ECharacterAIAttackTargetType InTargetType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AShinsenCharacter* GetBattleTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetAttachedQuestMarker();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UShinsenAnimNotifyVariableComponent* GetAnimNotifyVariableComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetAIWanderLocation(FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAITerritoryReturnRadiusEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AShinsenRoutePoint* GetAIRoutePoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAIPlayerFollowStartRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAIPlayerFollowAcceptanceRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAIPersonalSpaceInvadedDist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetAIPersonalSpaceEscapePoint(float InDist) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetAIPatrolLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAIMoveAspectRadius(float InRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAIDamageRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ForceStopFishing();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ExecStatusEffectManual(const FString& InCharStatusEffectID, bool bInForceEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ExecStatusDamageFloor(int32 InDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecFarmActionChargedFairyEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EndFishingAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DebugSetCameraFov(float FOV);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DebugSetCameraArmLength(float Length);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DebugGetCameraFov(float& FOV);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DebugGetCameraArmLength(float& Length);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DebugAddCameraArmLength(float Length);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearStatusDpsGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearMasterAlphaRate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearInputBuffer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearEnemyMainTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearColorChange();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckQuestMarker();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckFarmActionCharge(EFarmAction Action, float DeltaSecond, bool& Charge, int32& Level);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanFishing();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanEditParty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CancelFishing();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelFarmActionSprinkle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelFarmActionCharge();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBrakeAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AsyncReloadJobParams();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AdjustToFarmGridCoodinate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddStatusStamina(int32 InAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddStatusHp(int32 InAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddStatusEffect(const FString& InCharStatusEffectID, AShinsenCharacter* InAttacker, bool InBreakTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float AddStatusBreakTimer4(float InAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float AddStatusBreakTimer3(float InAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float AddStatusBreakTimer2(float InAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float AddStatusBreakTimer1(float InAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddStatusBreakPoint4(int32 InAdd, ECharacterAttr InAttr);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddStatusBreakPoint3(int32 InAdd, ECharacterAttr InAttr);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddStatusBreakPoint2(int32 InAdd, ECharacterAttr InAttr);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddStatusBreakPoint1(int32 InAdd, ECharacterAttr InAttr);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddFriend();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddCommonActionTarget(AActor* Actor);
    
};

