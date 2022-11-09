#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EShinsenAnimNotify_BulletByEnemyExistNumConditions.h"
#include "ShinsenAnimNotify_BulletByEnemyExistNumBulletSpawnInfo.generated.h"

class AShinsenBullet;

USTRUCT(BlueprintType)
struct FShinsenAnimNotify_BulletByEnemyExistNumBulletSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AShinsenBullet> Bullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OverrideBattleSkillID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AddLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AddRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemyExistNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenAnimNotify_BulletByEnemyExistNumConditions Conditions;
    
    SHINSEN_API FShinsenAnimNotify_BulletByEnemyExistNumBulletSpawnInfo();
};

