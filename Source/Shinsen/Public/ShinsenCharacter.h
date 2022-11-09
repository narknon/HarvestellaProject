#pragma once
#include "CoreMinimal.h"
#include "ShinsenCharacterSkillParams.h"
#include "ShinsenInterfaceNative_Character.h"
#include "ECharacterArmorLevel.h"
#include "GameFramework/Character.h"
#include "EFarmAction.h"
#include "ShinsenInterface_Collision.h"
#include "EMdCharJobBoardPanelSkillType.h"
#include "ShinsenInterface_Character.h"
#include "UObject/NoExportTypes.h"
#include "CharacterParameter.h"
#include "UObject/NoExportTypes.h"
#include "ECharacterBaseEyeHeightOverrideType.h"
#include "ECharacterSpawnType.h"
#include "ECharacterMode.h"
#include "ShinsenAnimInstanceBasePoseArg.h"
#include "Accessory.h"
#include "EShinsenIdleAnimType.h"
#include "ShinsenCharacterAttachCameraBlendParam.h"
#include "ECharacterInputBuffer.h"
#include "ShinsenCharacterStatusEffectAttachEffect.h"
#include "ShinsenCharacterStatusEffectAttachEffects.h"
#include "ECharacterDamageKind.h"
#include "CharacterDamageDeadDelegate.h"
#include "PlayerEventFarmDelegate.h"
#include "EVehicleType.h"
#include "Engine/EngineTypes.h"
#include "ShinsenCharacter.generated.h"

class UPrimitiveComponent;
class UShinsenObject_CharacterAIParameters;
class AShinsenFieldItem;
class UParticleSystemComponent;
class UStaticMeshComponent;
class UShinsenAnimInstance_BasePose;
class UShinsenSpringArmComponent;
class UAnimMontage;
class UBehaviorTree;
class UAnimInstance;
class AShinsenJobB10Skill04Fairy;
class UShinsenWeaponSpringArmComponent;
class UShinsenDataAsset_CharacterLandEffect;
class UShinsenDataAsset_CharacterJobParams;
class UParticleSystem;
class UNiagaraComponent;
class USkeletalMeshComponent;
class AActor;
class UCameraComponent;
class ACameraActor;
class UShinsenCollisionAttackComponent;
class UShinsenCharacterTimerComponent;
class UPawnSensingComponent;
class UShinsenDataAsset_CharacterJobParam;
class AShinsenCharacter;
class AShinsenFieldPicking;
class AShinsenMinimapMarker;
class USkeletalMesh;
class APawn;
class ANavigationData;

UCLASS(Blueprintable)
class SHINSEN_API AShinsenCharacter : public ACharacter, public IShinsenInterface_Character, public IShinsenInterfaceNative_Character, public IShinsenInterface_Collision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageJobChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTreeField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTreeBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIPlayerFollowStartRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIPlayerFollowAcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIPlayerFollowPoint1Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIPlayerFollowPoint2Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AITerritoryReturnRadiusStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AITerritoryReturnRadiusEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIDamageRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAIOutOfNavimesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIPersonalSpaceInvadedDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAIForceOverrrideHeightWhenTargetedAttackMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBeginPlayToHideWeaponMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowCameraTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowCameraLookUpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FollowCameraTurnRateLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FollowCameraLookUpRateLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFollowCameraTurnReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFollowCameraLookUpReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnCameraOverrideTargetArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LockOnCameraOverrideSocketOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnCameraOverrideLagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnCameraHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LookSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WidgetField3dGaugeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WidgetField3dGaugeSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WidgetField3dGaugeChildOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WidgetField3dGaugeTargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawInvisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleEnemySearchRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleAllwaysSearchTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleEnemyTargetedOverrideSearchRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BattleHitEffectSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleHitEffectOverrideRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleHitEffectRadiusMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleHitEffectRadiusMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleHitEffectTraceCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleKnockBackDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleBlowSpeedXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleBlowSpeedZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenCharacterSkillParams> SkillParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UShinsenDataAsset_CharacterLandEffect* LandEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UShinsenDataAsset_CharacterJobParams* JobParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectSocketNameRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator EffectSocketRotationRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectSocketScaleRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectSocketNamePelvis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator EffectSocketRotationPelvis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectSocketScalePelvis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectSocketNameHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator EffectSocketRotationHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectSocketScaleHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectSocketPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DamageNumberOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TerritoryReturnParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TerritoryReturnEffectScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterBaseEyeHeightOverrideType BaseEyeHeightOverrideType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseEyeHeightOverrideValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SensingIntervalValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> MeshBaseVisibleDistanceFactorThesholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeshMaxEvalRateForInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeshBaseNonRenderedUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpAttachTargetCameraSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBossDynamicDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterSpawnType CharacterSpawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterMode CharacterMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayMontageSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterParameter Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> WeaponStaticMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> WeaponSkeletalMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> WeaponMaterialSlotNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UShinsenWeaponSpringArmComponent*> WeaponSpringArms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeaponMeshesVisibility;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenAnimInstanceBasePoseArg AnimInstanceBasePoseArgField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenAnimInstanceBasePoseArg AnimInstanceBasePoseArgBattle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopAnimeRightFoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenIdleAnimType CurrentIdleAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShinsenSpringArmComponent* FollowCameraBoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* FollowCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* AttachCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterAttachCameraBlendParam AttachCameraBlendParamOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShinsenCollisionAttackComponent* CollisionAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollisionDefenseId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShinsenCharacterTimerComponent* CharacterTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterInputBuffer InputBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInputBufferAccepting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnSensingComponent* PawnSensing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAITerritoryReturning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAIEnemyBattleAreaCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAIPlayerFollowTeleportEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UShinsenObject_CharacterAIParameters* CharacterAIParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> Particle_HitStopEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> Niagara_HitStopEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> Particle_Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> Niagara_Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterStatusEffectAttachEffects StatusEffectAttachEffectsRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterStatusEffectAttachEffects StatusEffectAttachEffectsPelvis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterStatusEffectAttachEffects StatusEffectAttachEffectsHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenCharacterStatusEffectAttachEffect> UpdateAttachEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShinsenCharacter* BattlePlayerAttackTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BattleCurrentBattleSkillID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMdCharJobBoardPanelSkillType BattleCurrentSkillType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleCurrentSkillEnhancementParameterNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleCurrentSkillEnhancementComboNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleNoDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleNoDamageEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleNoStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleIgnoreDamageReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleIgnoreTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleFieldDamageNumberForceHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleFieldGaugeEnemyForceHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleFieldBreakGaugeForceHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleAttackCancelEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleAttackCanceled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleAttackPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattlePlayerAttackHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> BattleAreaIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterDamageKind DamageKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterArmorLevel ArmorLevelAnimNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterArmorLevel ArmorLevelAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageCutRate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterDamageDead OnCharacterDamageDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShinsenCharacter* BattleCharmTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShinsenCharacter* BattleFearTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UShinsenDataAsset_CharacterJobParam*> JobParamsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShinsenJobB10Skill04Fairy* JobB10Skill04Fairy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SearchLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TalkDistanceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TalkExpandForwardDistanceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShinsenFieldItem* TargetFieldItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShinsenFieldPicking* TargetFieldPicking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShinsenCharacter* TargetScriptActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActionTargetActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScriptActionWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ScheduleEventScriptPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ScheduleEventScriptLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDeadzoneMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadzoneMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpProhibitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FarmChargeEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FarmChargingEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bYawLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFarmMoveDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParallelMoveEndDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFarmAction FarmActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FarmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FarmLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FarmActionChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FarmActionChargeLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerEventFarm OnEventFarmAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShinsenMinimapMarker* MinimapMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimapMarkerSubID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleType VehicleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFishing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanTryCatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FishingPoint;
    
    AShinsenCharacter();
    UFUNCTION(BlueprintCallable)
    void UpdateScriptActionWait(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TimeHourChanged();
    
    UFUNCTION(BlueprintCallable)
    void StopSimpleAnimMontage(float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartDynamicDead();
    
    UFUNCTION(BlueprintCallable)
    static void SetupCharacterMesh(USkeletalMeshComponent* InMesh);
    
    UFUNCTION(BlueprintCallable)
    static void SetupAttachStaticMesh(UStaticMeshComponent* InMesh);
    
    UFUNCTION(BlueprintCallable)
    static void SetupAttachSkeletalMesh(USkeletalMeshComponent* InMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSimpleSystemMessage(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    void SetSafeFolderPath(const FName& NewFolderPath);
    
    UFUNCTION(BlueprintCallable)
    void SetSafeActorLabel(const FString& InNewActorLabel, bool InMarkDirty);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationRateYaw(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetPhase(const FName KeyName, const int32 PhaseNum);
    
    UFUNCTION(BlueprintCallable)
    void SetFarmWeaponMesh(USkeletalMesh* SkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugMoveDisable(bool bFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCharacterMode(ECharacterMode InMode);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleEvent(const bool bSetBattleEvent);
    
    UFUNCTION(BlueprintCallable)
    void setAnimEyeForceClose(bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetAddStatusEffectForBattleEvent(const FString& InCharStatusEffectID);
    
    UFUNCTION(BlueprintCallable)
    void SearchScriptActor();
    
    UFUNCTION(BlueprintCallable)
    void ResetRotationRateYaw();
    
    UFUNCTION(BlueprintCallable)
    void PlaySimpleAnimMontage(UAnimMontage* InMontage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayJobChangeEffect();
    
    UFUNCTION(BlueprintCallable)
    void OnSensingSee(APawn* InPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnSensingHear(APawn* InInstigator, const FVector& InLocation, float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedDynamicDead();
    
    UFUNCTION(BlueprintCallable)
    void KillMySelf();
    
    UFUNCTION(BlueprintCallable)
    void JumpSectionSimpleAnimMontage(FName InSection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScript() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isRootMotionActiveLow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isRootMotionActiveHigh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isRootMotionActive() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInsideView(FVector InTargetPos, float InDegRange);
    
    UFUNCTION(BlueprintCallable)
    bool IsFieldActionEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsFarmActionMontagePlaying();
    
    UFUNCTION(BlueprintCallable)
    bool IsFarmActionEnable(bool bCheckPlayMontage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsFallASleeping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isCommonAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimMontagePlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputVehicle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputTurnAtRateMouse(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputTurnAtRate(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputSprintReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputSprint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputSpecial2();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputSpecial1();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputSkillUReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputSkillU();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputSkillRReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputSkillR();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputSkillLReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputSkillL();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputSkillBReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputSkillB();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputPetAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputMoveRight(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputMoveForward(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputLookUpAtRateMouse(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputLookUpAtRate(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputLockOnPrev();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputLockOnNext();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputLockOn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputJump();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputJobU();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputJobR();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputJobL();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputJobB();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputItemUse();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputItemSelectPrev();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputItemSelectNext();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputItemPagePrev();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputItemPageNext();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputFarmToolU();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputFarmToolShiftReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputFarmToolShift();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputFarmToolR();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputFarmToolL();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputFarmToolD();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputFarmFacilityRotR();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputFarmFacilityRotL();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputFarmAction4Released();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputFarmAction4();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputFarmAction3Released();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputFarmAction3();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputFarmAction2Released();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputFarmAction2();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputFarmAction1Released();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputFarmAction1();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputDodge();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputDebugSprint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputDebugSpawnSkeletalMeshSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputDebugSpawnSkeletalMeshPrev();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputDebugSpawnSkeletalMeshNext();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputDebugSpawnSkeletalMeshDestroy();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputDebugPlayerSkeletalMeshPrev();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputDebugPlayerSkeletalMeshNext();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputDebugPlayerSkeletalMeshClear();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputDebugPlayerSkeletalMeshChange();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputDebugPlayerClimbHighReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputDebugPlayerClimbHigh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputDebugControlModeReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputDebugControlModePrev();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputDebugControlModeNext();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputDebugControlMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputCameraReset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputButtonShiftReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputButtonShift();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAttackReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputActionReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InputAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitPatrolPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUID() const;
    
    UFUNCTION(BlueprintCallable)
    AShinsenCharacter* GetPlayerTargetForFriendBatlleMode();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPhase(const FName KeyName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ANavigationData* GetNavDataForAgentName(const FName AgentName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetFarmActionTargetPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableGreetVoice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCharID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimInstance* GetAnimInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FarmActionCommon();
    
    UFUNCTION(BlueprintCallable)
    void EnableGreetVoice();
    
    UFUNCTION(BlueprintCallable)
    void DisableGreetVoice();
    
    UFUNCTION(BlueprintCallable)
    void DeferInputStopOfMovementUntilNextFrame(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void ClearStatusForFallASleep(bool bClearStatusEffect);
    
    UFUNCTION(BlueprintCallable)
    void ClearFarmActionChargeEffect(bool bStopSe);
    
    UFUNCTION(BlueprintCallable)
    bool CheckPressActionEx2();
    
    UFUNCTION(BlueprintCallable)
    bool CheckPressActionEx1();
    
    UFUNCTION(BlueprintCallable)
    bool CheckPressActionButton();
    
    UFUNCTION(BlueprintCallable)
    void BlendJumpSectionSimpleAnimMontage(FName InSection, float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    int32 AddFieldActionItem(const FString& ItemId, int32 addNum);
    
    UFUNCTION(BlueprintCallable)
    int32 AddAccessory(FAccessory Accessory);
    
    UFUNCTION(BlueprintCallable)
    void AccelerationRotationYaw(float Time, float Rate);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetWidgetField3dGaugeTargetOffset(FVector Offset) override PURE_VIRTUAL(SetWidgetField3dGaugeTargetOffset,);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetField3dGaugeEnabled(bool Enabled) override PURE_VIRTUAL(SetWidgetField3dGaugeEnabled,);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetField3dGaugeChildOffset(FVector Offset) override PURE_VIRTUAL(SetWidgetField3dGaugeChildOffset,);
    
    UFUNCTION(BlueprintCallable)
    bool IsWidgetField3dGaugeEnabled() const override PURE_VIRTUAL(IsWidgetField3dGaugeEnabled, return false;);
    
    UFUNCTION(BlueprintCallable)
    FVector GetWidgetField3dGaugeTargetOffset() override PURE_VIRTUAL(GetWidgetField3dGaugeTargetOffset, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    void GetWidgetField3dGaugeTargetCharacter(AShinsenCharacter*& OutCharacter, bool& bOutLockOn, AShinsenCharacter* CandidateCharacter) override PURE_VIRTUAL(GetWidgetField3dGaugeTargetCharacter,);
    
    UFUNCTION(BlueprintCallable)
    FName GetWidgetField3dGaugeSocketname() override PURE_VIRTUAL(GetWidgetField3dGaugeSocketname, return NAME_None;);
    
    UFUNCTION(BlueprintCallable)
    FVector GetWidgetField3dGaugeChildOffset() override PURE_VIRTUAL(GetWidgetField3dGaugeChildOffset, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    UShinsenAnimInstance_BasePose* GetAnimInstanceBasePose() const override PURE_VIRTUAL(GetAnimInstanceBasePose, return NULL;);
    
};

