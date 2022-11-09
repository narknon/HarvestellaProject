#include "ShinsenBTTask_BattleMon002_DecideMovePointByStepNum.h"

UShinsenBTTask_BattleMon002_DecideMovePointByStepNum::UShinsenBTTask_BattleMon002_DecideMovePointByStepNum() {
    this->StepNum = 1;
    this->NowLocationPointBlackboardKey = TEXT("NowLocationPoint");
    this->TargetLocationPointBlackboardKey = TEXT("TargetLocationPoint");
    this->OutMovePointPrefix = TEXT("Point_BossMovePointOut");
    this->OutMovePointNum = 8;
    this->InMovePointPrefix = TEXT("Point_BossMovePointIn");
    this->InMovePointNum = 4;
}

