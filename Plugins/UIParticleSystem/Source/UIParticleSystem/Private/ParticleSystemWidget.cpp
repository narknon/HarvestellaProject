#include "ParticleSystemWidget.h"

class UParticleSystem;

bool UParticleSystemWidget::UpdateParticleActivate(bool bActivate) {
    return false;
}

bool UParticleSystemWidget::UpdateParticle(UParticleSystem* ParticleSystem, bool bActivate) {
    return false;
}

void UParticleSystemWidget::SetReactivate(bool bActivateAndReset) {
}

void UParticleSystemWidget::InitParticle() {
}

void UParticleSystemWidget::ActivateParticles(bool bActive, bool bReset) {
}

UParticleSystemWidget::UParticleSystemWidget() {
    this->ParticleSystemTemplate = NULL;
    this->bReactivate = false;
    this->bTickEvenWhenPaused = false;
    this->WorldParticleComponent = NULL;
    this->WorldParticleActor = NULL;
}

