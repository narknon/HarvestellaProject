#include "ShinsenAnimNotify_BulletByBlackboardBulletSpawnInfo.h"

FShinsenAnimNotify_BulletByBlackboardBulletSpawnInfo::FShinsenAnimNotify_BulletByBlackboardBulletSpawnInfo() {
    this->Bullet = NULL;
    this->ValueType = EShinsenAnimNotify_BulletByBlackboardBulletValueTypes::S32;
    this->ValueS32 = 0;
    this->ValueF32 = 0.00f;
    this->ValueBool = false;
    this->Conditions = EShinsenAnimNotify_BulletByBlackboardConditions::GreaterThan;
}

