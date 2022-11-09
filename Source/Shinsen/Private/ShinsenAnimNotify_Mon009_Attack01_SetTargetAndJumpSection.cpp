#include "ShinsenAnimNotify_Mon009_Attack01_SetTargetAndJumpSection.h"

UShinsenAnimNotify_Mon009_Attack01_SetTargetAndJumpSection::UShinsenAnimNotify_Mon009_Attack01_SetTargetAndJumpSection() {
    this->bAttackNumInclement = false;
    this->AttackNumBlackboardKey = TEXT("Attack01AttackNum");
    this->AttackNumMax = 3;
    this->LeftSectionName = TEXT("LeftShoot");
    this->RightSectionName = TEXT("RightShoot");
    this->EndSectionName = TEXT("End");
}

