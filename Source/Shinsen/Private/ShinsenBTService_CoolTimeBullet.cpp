#include "ShinsenBTService_CoolTimeBullet.h"

UShinsenBTService_CoolTimeBullet::UShinsenBTService_CoolTimeBullet() {
    this->Bullet = NULL;
    this->CoolDownTime = 5.00f;
    this->bDoFirstRun = false;
    this->LoopCount = -1;
}

