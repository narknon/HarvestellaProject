#include "ShinsenBTTask_BattleMon002_MoveToTargetPoint.h"

UShinsenBTTask_BattleMon002_MoveToTargetPoint::UShinsenBTTask_BattleMon002_MoveToTargetPoint() {
    this->bForceDiveMove = false;
    this->NowLocationPointBlackboardKey = TEXT("NowLocationPoint");
    this->TargetLocationPointBlackboardKey = TEXT("TargetLocationPoint");
    this->ViaNowLocationPointBlackboardKey = TEXT("ViaNowLocationPoint");
    this->ViaTargetLocationPointBlackboardKey = TEXT("ViaTargetLocationPoint");
    this->ViaMoveTypeBlackboardKey = TEXT("ViaMoveType");
    this->OutMovePointPrefix = TEXT("Point_BossMovePointOut");
    this->OutMovePointNum = 8;
    this->OutMoveFieldNum = 4;
    this->InMovePointPrefix = TEXT("Point_BossMovePointIn");
    this->InMovePointNum = 4;
}

