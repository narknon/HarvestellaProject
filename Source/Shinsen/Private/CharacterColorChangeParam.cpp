#include "CharacterColorChangeParam.h"

FCharacterColorChangeParam::FCharacterColorChangeParam() {
    this->Type = ECharacterColorChangeType::Fix;
    this->Time = 0.00f;
    this->RateStart = 0.00f;
    this->RateEnd = 0.00f;
    this->RateMultiplier = 0.00f;
    this->RateCurve = NULL;
    this->LoopCount = 0;
    this->FresnelExp = 0.00f;
}

