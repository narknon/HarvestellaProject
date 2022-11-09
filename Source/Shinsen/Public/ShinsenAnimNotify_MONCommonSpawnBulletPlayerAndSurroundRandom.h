#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EShinsenAnimNotify_MONCommonSpawnBulletPlayerAndSurroundRandomSpawnAreaType.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenAnimNotify_MONCommonSpawnBulletPlayerAndSurroundRandom.generated.h"

class AShinsenBullet;
class UObject;
class AShinsenCharacter;

UCLASS(Blueprintable, CollapseCategories)
class SHINSEN_API UShinsenAnimNotify_MONCommonSpawnBulletPlayerAndSurroundRandom : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNotSpawnPlayerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenAnimNotify_MONCommonSpawnBulletPlayerAndSurroundRandomSpawnAreaType SpawnAreaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRandomBulletPlayerBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSelfRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvalidLocationNotSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnAreaRadiusMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnAreaRadiusMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnCollisionRadiusOverlapJudge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnAreaDivideNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomSpawnNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AShinsenBullet> Bullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BattleSkillID;
    
    UShinsenAnimNotify_MONCommonSpawnBulletPlayerAndSurroundRandom();
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    static void GetPlayerAndSurroundRandomLocations(const UObject* WorldContextObject, AShinsenCharacter* InOwner, bool bInIsNotSpawnPlayerLocation, EShinsenAnimNotify_MONCommonSpawnBulletPlayerAndSurroundRandomSpawnAreaType InSpawnAreaType, bool bInIsRandomBulletPlayerBase, bool bInIgnoreSelfRange, bool bInInvalidLocationNotSpawn, float InSpawnAreaRadiusMin, float InSpawnAreaRadiusMax, float InSpawnCollisionRadiusOverlapJudge, int32 InSpawnAreaDivideNum, int32 InRandomSpawnNum, TArray<FVector>& OutputLocations);
    
};

