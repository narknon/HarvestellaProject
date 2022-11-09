#include "ShinsenSpringArmComponent.h"

UShinsenSpringArmComponent::UShinsenSpringArmComponent() {
    this->LockOnCameraLagSpeed = 3.00f;
    this->LerpSpeedTargetOffset = 10.00f;
    this->LerpSpeedSocketOffset = 10.00f;
    this->LerpSpeedTargetArmLength = 10.00f;
    this->bUseInterpolationTime = true;
    this->InterpolationSpeed = 4.00f;
    this->PropSize = 50.00f;
    this->PropChannel = ECC_GameTraceChannel8;
    this->CollisionPlaneOffsetZ = -90.00f;
}

