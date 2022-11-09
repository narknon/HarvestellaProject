#include "ShinsenAnimNotify_BulletByEnemyExistNumBulletSpawnInfo.h"

FShinsenAnimNotify_BulletByEnemyExistNumBulletSpawnInfo::FShinsenAnimNotify_BulletByEnemyExistNumBulletSpawnInfo() {
    this->Bullet = NULL;
    this->EnemyExistNum = 0;
    this->Conditions = EShinsenAnimNotify_BulletByEnemyExistNumConditions::GreaterThan;
}

