#include "MdBattleSkill.h"

FMdBattleSkill::FMdBattleSkill() {
    this->CoolTime = 0;
    this->Stamina = 0;
    this->RangeDistance = 0;
    this->bIgnoreRangeDistance = false;
    this->bNotUseStanimaSoon = false;
    this->AttackRatePhysics = 0;
    this->AttackRateMagic = 0;
    this->AddAttackRatePhysics1 = 0;
    this->AddAttackRateMagic1 = 0;
    this->AddCoolTime1 = 0;
    this->AddAttackRatePhysics2 = 0;
    this->AddAttackRateMagic2 = 0;
    this->AddCoolTime2 = 0;
    this->BreakDamage = 0;
    this->bAttrZan = false;
    this->bAttrGeki = false;
    this->bAttrSai = false;
    this->bAttrHa = false;
    this->bAttrHi = false;
    this->bAttrFuu = false;
    this->bAttrSui = false;
    this->bAttrChi = false;
    this->bAttrHyou = false;
    this->bAttrRai = false;
    this->bAttrTetsu = false;
    this->bAttrDoku = false;
    this->bDispSkillName = false;
    this->bItem = false;
    this->bDisabledAttackRateCheck = false;
}

