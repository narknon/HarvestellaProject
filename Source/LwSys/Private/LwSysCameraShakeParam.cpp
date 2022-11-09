#include "LwSysCameraShakeParam.h"

FLwSysCameraShakeParam::FLwSysCameraShakeParam() {
    this->bUseNoise = false;
    this->bSingleInstance = false;
    this->Duration = 0.00f;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
}

