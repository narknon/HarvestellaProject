#include "ShinsenBTTask_BattleMon006_02_RangeAttack05.h"

UShinsenBTTask_BattleMon006_02_RangeAttack05::UShinsenBTTask_BattleMon006_02_RangeAttack05() {
    this->RandomAddAngleMin = -15.00f;
    this->RandomAddAngleMax = 15.00f;
    this->FirstAttackMarkerStartTime = 0.00f;
    this->FirstAttackMarkerLifeTime = 1.00f;
    this->AttackMarkerEachDelayTime = 0.20f;
    this->AttackMarkerAddLifeTime = 1.63f;
    this->AttackControlBlackboardKey = TEXT("RangeAttack05AttackStep");
    this->LoopStartSectionName = TEXT("Loop");
    this->LoopEndSectionName = TEXT("LoopEnd");
}

