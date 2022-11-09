#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ShinsenCharacterCollisionParam.h"
#include "ShinsenBulletCollisionParam.h"
#include "ShinsenInterface_Collision.h"
#include "EBulletSpawnLocationBase.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenBullet.generated.h"

class UShinsenCollisionAttackComponent;
class USphereComponent;
class UProjectileMovementComponent;
class AShinsenCharacter;
class AShinsenBullet;

UCLASS(Blueprintable)
class SHINSEN_API AShinsenBullet : public AActor, public IShinsenInterface_Collision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenBulletCollisionParam> CollisionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBulletSpawnLocationBase SpawnLocationBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SocketOffsetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator WorldRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetNotExistForwardOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnLookAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFriendlyFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShinsenCollisionAttackComponent* CollisionAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollisionDefenseId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* Movement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShinsenCharacter* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShinsenCharacter* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BattleSkillID;
    
    AShinsenBullet();
    UFUNCTION(BlueprintCallable)
    static AShinsenBullet* SpawnFromIdAtLocation(AShinsenCharacter* InParent, const FString& InBattleSkillID, FVector InLocation, FRotator InRotation);
    
    UFUNCTION(BlueprintCallable)
    static AShinsenBullet* SpawnFromId(AShinsenCharacter* InParent, const FString& InBattleSkillID, FVector InAddLocation, FRotator InAddRotation);
    
    UFUNCTION(BlueprintCallable)
    static AShinsenBullet* SpawnFromClassAtLocation(AShinsenCharacter* InParent, const FString& InBattleSkillID, TSubclassOf<AShinsenBullet> InClass, FVector InLocation, FRotator InRotation);
    
    UFUNCTION(BlueprintCallable)
    static AShinsenBullet* SpawnFromClass(AShinsenCharacter* InParent, const FString& InBattleSkillID, TSubclassOf<AShinsenBullet> InClass, FVector InAddLocation, FRotator InAddRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetNextTickDestroy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AShinsenCharacter* GetTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void AddVelocity(float InSpeed, float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    int32 AddCollision(const FShinsenCharacterCollisionParam& InParam);
    
    
    // Fix for true pure virtual functions not being implemented
};

