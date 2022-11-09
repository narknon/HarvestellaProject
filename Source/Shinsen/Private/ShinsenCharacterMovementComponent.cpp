#include "ShinsenCharacterMovementComponent.h"

void UShinsenCharacterMovementComponent::setJumpZVelocity(float InVelocity) {
}

void UShinsenCharacterMovementComponent::setGravityScale(float InScale) {
}

void UShinsenCharacterMovementComponent::resetMaxWalkSpeed() {
}

void UShinsenCharacterMovementComponent::resetJumpZVelocity() {
}

void UShinsenCharacterMovementComponent::resetGravityScale() {
}

float UShinsenCharacterMovementComponent::getSaveMaxWalkSpeed() const {
    return 0.0f;
}

float UShinsenCharacterMovementComponent::getSaveJumpZVelocity() const {
    return 0.0f;
}

float UShinsenCharacterMovementComponent::getSaveGravityScale() const {
    return 0.0f;
}

UShinsenCharacterMovementComponent::UShinsenCharacterMovementComponent() {
    this->MaxSprintSpeed = 1000.00f;
}

