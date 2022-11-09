#include "ShinsenBTTask_BattleMon002_DecideMovePointByRandom.h"

UShinsenBTTask_BattleMon002_DecideMovePointByRandom::UShinsenBTTask_BattleMon002_DecideMovePointByRandom() {
    this->RandomType = EShinsenBTTask_BattleMon002_DecideMovePointByRandomType::Normal;
    this->Skill03SpPointWeight = 0.50f;
    this->NowLocationPointBlackboardKey = TEXT("NowLocationPoint");
    this->TargetLocationPointBlackboardKey = TEXT("TargetLocationPoint");
    this->OutMovePointPrefix = TEXT("Point_BossMovePointOut");
    this->OutMovePointNum = 8;
    this->OutMoveFieldNum = 4;
    this->InMovePointPrefix = TEXT("Point_BossMovePointIn");
    this->InMovePointNum = 4;
    this->SpMovePointPrefix = TEXT("Point_BossMovePointSp");
    this->OutFieldCenterPointPrefix = TEXT("Point_BossFieldCenterPointOut");
    this->InFieldCenterPointId = TEXT("Point_BossFieldCenterPointIn");
}

