#include "ShinsenMapGimmick.h"

class UShinsenWidgetMapGimmickRepair;

UShinsenWidgetMapGimmickRepair* AShinsenMapGimmick::CreateRepairWidget() {
    return NULL;
}

AShinsenMapGimmick::AShinsenMapGimmick() {
    this->bEnable = true;
    this->bFound = false;
    this->EnableActionAngle = 60.00f;
    this->ActionRadiusOffset = 0.00f;
    this->Type = EMapGimmicType::Unknown;
    this->SubID = -1;
    this->AreaID = 0;
}

