#include "ShinsenBTTask_LookToRotation.h"

UShinsenBTTask_LookToRotation::UShinsenBTTask_LookToRotation() {
    this->Index = 0;
    this->MoveTime = 0.50f;
    this->TargetType = EShinsenBTTask_LookToRotationTarget::BlackboradTarget;
    this->Alpha = 1.00f;
    this->bKeepWatching = false;
    this->bTaskeFinishedSmooting = true;
    this->SmootingVelocity = 800.00f;
    this->bVerticalLock = false;
    this->bHorizontalLock = false;
}

