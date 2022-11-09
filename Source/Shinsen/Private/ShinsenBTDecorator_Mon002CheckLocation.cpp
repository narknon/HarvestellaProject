#include "ShinsenBTDecorator_Mon002CheckLocation.h"

UShinsenBTDecorator_Mon002CheckLocation::UShinsenBTDecorator_Mon002CheckLocation() {
    this->CheckType = EShinsenBTDecorator_Mon002CheckLocationCheckType::PointNo;
    this->PointNo = 1;
    this->FieldNo = 1;
    this->NowLocationPointBlackboardKey = TEXT("NowLocationPoint");
    this->OutMovePointPrefix = TEXT("Point_BossMovePointOut");
    this->OutMovePointNum = 8;
    this->OutMoveFieldNum = 4;
    this->InMovePointPrefix = TEXT("Point_BossMovePointIn");
    this->InMovePointNum = 4;
    this->SpMovePointPrefix = TEXT("Point_BossMovePointSp");
    this->OutFieldCenterPointPrefix = TEXT("Point_BossFieldCenterPointOut");
    this->InFieldCenterPointId = TEXT("Point_BossFieldCenterPointIn");
}

