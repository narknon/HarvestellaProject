#include "ShinsenBTService_MONCommonSpawnBulletPlayerAndSurroundRandom.h"

UShinsenBTService_MONCommonSpawnBulletPlayerAndSurroundRandom::UShinsenBTService_MONCommonSpawnBulletPlayerAndSurroundRandom() {
    this->IsNotSpawnPlayerLocation = false;
    this->IsRandomBulletPlayerBase = false;
    this->bIgnoreSelfRange = false;
    this->bInvalidLocationNotSpawn = false;
    this->SpawnAreaRadiusMin = 0.00f;
    this->SpawnAreaRadiusMax = 0.00f;
    this->SpawnCollisionRadiusOverlapJudge = 0.00f;
    this->SpawnAreaDivideNum = 0;
    this->RandomSpawnNum = 0;
    this->Bullet = NULL;
    this->CoolDownTime = 5.00f;
    this->bDoFirstRun = false;
}

