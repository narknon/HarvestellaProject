#include "ShinsenAnimNotifyState_LookToRotation.h"

UShinsenAnimNotifyState_LookToRotation::UShinsenAnimNotifyState_LookToRotation() {
    this->Index = 0;
    this->TargetType = EShinsenAnimNotifyState_LookToRotationTarget::BlackboradTarget;
    this->Alpha = 0.00f;
    this->bKeepWatching = false;
    this->bTaskeFinishedSmooting = false;
    this->SmootingVelocity = 0.00f;
}

