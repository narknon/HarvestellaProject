#include "MdEnemyPosition.h"

FMdEnemyPosition::FMdEnemyPosition() {
    this->MonsterType = 0;
    this->AIType = 0;
    this->MiniMapSubID = 0;
    this->Scale = 0.00f;
    this->bGroupSensing = false;
    this->WalkSpeed = 0;
    this->ChaseSpeed = 0;
    this->Sensing = 0;
    this->SearchLength = 0;
    this->SearchAngle = 0;
    this->WaitTimeMin = 0;
    this->WaitTimeMax = 0;
    this->MHp = 0;
    this->AtkPhy = 0;
    this->AtkMag = 0;
    this->DefPhy = 0;
    this->DefMag = 0;
    this->Exp = 0;
    this->Level = 0;
    this->bDispLevel = false;
    this->JobPoint = 0;
    this->BreakPoint1 = 0;
    this->BreakMulti1 = 0;
    this->BreakFrame1 = 0;
    this->BreakAttr1 = 0;
    this->BreakAttrRate1 = 0;
    this->BreakPoint2 = 0;
    this->BreakMulti2 = 0;
    this->BreakFrame2 = 0;
    this->BreakAttr2 = 0;
    this->BreakAttrRate2 = 0;
    this->BreakPoint3 = 0;
    this->BreakMulti3 = 0;
    this->BreakFrame3 = 0;
    this->BreakAttr3 = 0;
    this->BreakAttrRate3 = 0;
    this->BreakPoint4 = 0;
    this->BreakMulti4 = 0;
    this->BreakFrame4 = 0;
    this->BreakAttr4 = 0;
    this->BreakAttrRate4 = 0;
    this->BreakMulti12 = 0;
    this->BreakMulti23 = 0;
    this->BreakMulti34 = 0;
    this->DpsGauge = 0;
    this->bNotTerritoryReturn = false;
    this->RespawnDay = 0;
    this->PushAcc = 0.00f;
    this->PushLerp = 0.00f;
    this->PushColScale = 0.00f;
}

