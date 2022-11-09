#include "ShinsenBTDecorator_Mon002CheckPlayerLocation.h"

UShinsenBTDecorator_Mon002CheckPlayerLocation::UShinsenBTDecorator_Mon002CheckPlayerLocation() {
    this->CheckType = EShinsenBTDecorator_Mon002CheckPlayerLocationCheckType::OutFieldAny;
    this->FieldNo = 1;
    this->NowLocationPointBlackboardKey = TEXT("NowLocationPoint");
    this->OutMovePointPrefix = TEXT("Point_BossMovePointOut");
    this->OutMovePointNum = 8;
    this->OutMoveFieldNum = 4;
    this->InMovePointPrefix = TEXT("Point_BossMovePointIn");
    this->InMovePointNum = 4;
    this->OutFieldCenterPointPrefix = TEXT("Point_BossFieldCenterPointOut");
    this->InFieldCenterPointId = TEXT("Point_BossFieldCenterPointIn");
}

