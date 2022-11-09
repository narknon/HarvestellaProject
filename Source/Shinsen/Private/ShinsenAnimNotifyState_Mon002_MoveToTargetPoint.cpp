#include "ShinsenAnimNotifyState_Mon002_MoveToTargetPoint.h"

UShinsenAnimNotifyState_Mon002_MoveToTargetPoint::UShinsenAnimNotifyState_Mon002_MoveToTargetPoint() {
    this->ViaNowLocationPointBlackboardKey = TEXT("ViaNowLocationPoint");
    this->ViaTargetLocationPointBlackboardKey = TEXT("ViaTargetLocationPoint");
    this->ViaMoveTypeBlackboardKey = TEXT("ViaMoveType");
    this->MoveTotalTimeBlackboardKey = TEXT("MoveTotalTime");
    this->MoveControlPointBlackboardKey.AddDefaulted(3);
    this->MoveControlPointNumBlackboardKey = TEXT("MoveControlPointNum");
    this->MoveIncTimeBlackboardKey = TEXT("MoveIncTime");
    this->DamageCollisionComponentName = TEXT("DamageCollision");
    this->OutMovePointNum = 8;
    this->OutMoveFieldNum = 4;
    this->OutMovePointPrefix = TEXT("Point_BossMovePointOut");
    this->OutFieldCenterPointPrefix = TEXT("Point_BossFieldCenterPointOut");
    this->InFieldCenterPointId = TEXT("Point_BossFieldCenterPointIn");
    this->FloatingMoveEaseInOutCoe = 1.50f;
    this->FloatingMoveStartEndControlPointBaseCoe = 14500.00f;
    this->FloatingMoveLargeTurnStartEndPointCoe = 0.80f;
    this->FloatingMoveSmallTurnStartEndPointCoe = 0.15f;
    this->FloatingMoveBackToFieldCenterPointCoe = 1.15f;
}

