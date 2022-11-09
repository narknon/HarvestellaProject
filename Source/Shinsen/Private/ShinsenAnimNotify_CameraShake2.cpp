#include "ShinsenAnimNotify_CameraShake2.h"

UShinsenAnimNotify_CameraShake2::UShinsenAnimNotify_CameraShake2() {
    this->bDistEnabled = true;
    this->DistNear = 500.00f;
    this->DistFar = 3000.00f;
    this->bSingleInstance = true;
    this->Duration = 0.20f;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.07f;
    this->Scale = 1.00f;
    this->PlaySpace = ECameraShakePlaySpace::CameraLocal;
}

