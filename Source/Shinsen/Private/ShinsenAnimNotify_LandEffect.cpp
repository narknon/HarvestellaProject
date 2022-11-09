#include "ShinsenAnimNotify_LandEffect.h"

UShinsenAnimNotify_LandEffect::UShinsenAnimNotify_LandEffect() {
    this->LandPartsType = ECharacterLandType::Walk;
    this->Scale = 1.00f;
    this->bMove = false;
    this->bForceAINoise = false;
    this->RayOffsetZStart = 30.00f;
    this->RayOffsetZEnd = -60.00f;
}

