#include "ShinsenAnimNotify_MONCommonSpawnBulletPlayerAndSurroundRandom.h"

class UObject;
class AShinsenCharacter;

UShinsenAnimNotify_MONCommonSpawnBulletPlayerAndSurroundRandom::UShinsenAnimNotify_MONCommonSpawnBulletPlayerAndSurroundRandom() {
    this->IsNotSpawnPlayerLocation = false;
    this->SpawnAreaType = EShinsenAnimNotify_MONCommonSpawnBulletPlayerAndSurroundRandomSpawnAreaType::PlayerOrBehindPlayer;
    this->IsRandomBulletPlayerBase = false;
    this->bIgnoreSelfRange = false;
    this->bInvalidLocationNotSpawn = false;
    this->SpawnAreaRadiusMin = 0.00f;
    this->SpawnAreaRadiusMax = 0.00f;
    this->SpawnCollisionRadiusOverlapJudge = 0.00f;
    this->SpawnAreaDivideNum = 2;
    this->RandomSpawnNum = 0;
    this->Bullet = NULL;
}

void UShinsenAnimNotify_MONCommonSpawnBulletPlayerAndSurroundRandom::GetPlayerAndSurroundRandomLocations(
    const UObject* WorldContextObject, AShinsenCharacter* InOwner, bool bInIsNotSpawnPlayerLocation,
    EShinsenAnimNotify_MONCommonSpawnBulletPlayerAndSurroundRandomSpawnAreaType InSpawnAreaType,
    bool bInIsRandomBulletPlayerBase, bool bInIgnoreSelfRange, bool bInInvalidLocationNotSpawn,
    float InSpawnAreaRadiusMin, float InSpawnAreaRadiusMax, float InSpawnCollisionRadiusOverlapJudge,
    int32 InSpawnAreaDivideNum, int32 InRandomSpawnNum, TArray<FVector>& OutputLocations)
{
}

