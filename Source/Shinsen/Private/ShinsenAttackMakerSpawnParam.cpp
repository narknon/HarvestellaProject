#include "ShinsenAttackMakerSpawnParam.h"

FShinsenAttackMakerSpawnParam::FShinsenAttackMakerSpawnParam() {
    this->LocationType = EShinsenAttackMakerLocationType::World;
    this->SizeFront = 0.00f;
    this->SizeSide = 0.00f;
    this->SizeHeight = 0.00f;
    this->bCircle = false;
    this->bFan = false;
    this->FanAngle = 0.00f;
    this->InTime = 0.00f;
    this->OutTime = 0.00f;
    this->Direction = 0.00f;
    this->bOriginCenter = false;
    this->LandCheckOffsetStart = 0.00f;
    this->LandCheckOffsetEnd = 0.00f;
    this->LandOffset = 0.00f;
    this->bSe = false;
    this->bSprite = false;
    this->PredictedLifeTimer = 0.00f;
}

