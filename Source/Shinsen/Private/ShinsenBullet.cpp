#include "ShinsenBullet.h"
#include "Templates/SubclassOf.h"
#include "ShinsenCollisionAttackComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

class AShinsenCharacter;
class AShinsenBullet;

AShinsenBullet* AShinsenBullet::SpawnFromIdAtLocation(AShinsenCharacter* InParent, const FString& InBattleSkillID, FVector InLocation, FRotator InRotation) {
    return NULL;
}

AShinsenBullet* AShinsenBullet::SpawnFromId(AShinsenCharacter* InParent, const FString& InBattleSkillID, FVector InAddLocation, FRotator InAddRotation) {
    return NULL;
}

AShinsenBullet* AShinsenBullet::SpawnFromClassAtLocation(AShinsenCharacter* InParent, const FString& InBattleSkillID, TSubclassOf<AShinsenBullet> InClass, FVector InLocation, FRotator InRotation) {
    return NULL;
}

AShinsenBullet* AShinsenBullet::SpawnFromClass(AShinsenCharacter* InParent, const FString& InBattleSkillID, TSubclassOf<AShinsenBullet> InClass, FVector InAddLocation, FRotator InAddRotation) {
    return NULL;
}

void AShinsenBullet::SetNextTickDestroy() {
}

AShinsenCharacter* AShinsenBullet::GetTarget() const {
    return NULL;
}

void AShinsenBullet::AddVelocity(float InSpeed, float InDeltaTime) {
}

int32 AShinsenBullet::AddCollision(const FShinsenCharacterCollisionParam& InParam) {
    return 0;
}

AShinsenBullet::AShinsenBullet() {
    this->bIgnoreMap = true;
    this->LifeTime = 10.00f;
    this->SpawnLocationBase = EBulletSpawnLocationBase::Target;
    this->ForwardOffset = 0.00f;
    this->TargetNotExistForwardOffset = 500.00f;
    this->bSpawnLookAtTarget = false;
    this->bFriendlyFire = false;
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Root"));
    this->CollisionAttack = CreateDefaultSubobject<UShinsenCollisionAttackComponent>(TEXT("CollisionAttack"));
    this->CollisionDefenseId = 1;
    this->Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Movement"));
    this->Parent = NULL;
    this->Target = NULL;
    this->LifeTimer = 0.00f;
}

