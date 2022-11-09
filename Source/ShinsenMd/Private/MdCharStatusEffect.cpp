#include "MdCharStatusEffect.h"

FMdCharStatusEffect::FMdCharStatusEffect() {
    this->Time = 0;
    this->Param1 = 0;
    this->Param2 = 0;
    this->Param3 = 0;
    this->Target = 0;
    this->SuccessRate = 0;
    this->bRemoveJobChange = false;
    this->bIgnoreClamp = false;
    this->bHideIcon = false;
    this->bFood = false;
}

