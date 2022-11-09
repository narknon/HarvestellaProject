#include "ShinsenAnimNotifyState_AttackCancel.h"

UShinsenAnimNotifyState_AttackCancel::UShinsenAnimNotifyState_AttackCancel() {
    this->bAttack = true;
    this->AttackSectionBlendTime = 0.20f;
    this->AttackNeedsEnhancementComboNum = 0;
    this->bJump = true;
    this->bJobChange = true;
    this->bDodge = true;
    this->bSkillU = true;
    this->bSkillL = true;
    this->bSkillB = true;
    this->bSkillR = true;
}

