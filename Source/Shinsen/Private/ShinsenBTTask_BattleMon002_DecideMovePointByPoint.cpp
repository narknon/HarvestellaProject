#include "ShinsenBTTask_BattleMon002_DecideMovePointByPoint.h"

UShinsenBTTask_BattleMon002_DecideMovePointByPoint::UShinsenBTTask_BattleMon002_DecideMovePointByPoint() {
    this->PointNo = 1;
    this->TargetLocationPointBlackboardKey = TEXT("TargetLocationPoint");
    this->OutMovePointPrefix = TEXT("Point_BossMovePointOut");
    this->OutMovePointNum = 8;
    this->InMovePointPrefix = TEXT("Point_BossMovePointIn");
    this->InMovePointNum = 4;
}

