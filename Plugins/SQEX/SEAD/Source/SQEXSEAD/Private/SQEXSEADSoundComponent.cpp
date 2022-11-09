#include "SQEXSEADSoundComponent.h"

class USQEXSEADSoundBank;

void USQEXSEADSoundComponent::Stop() {
}

void USQEXSEADSoundComponent::SetZeroOneParameter(const FSQEXSEADZeroOneParam& Param, float FadeTimeDuration) {
}

void USQEXSEADSoundComponent::SetVolumeMultiplier(float NewVolumeMultiplier, float FadeTimeDuration) {
}

void USQEXSEADSoundComponent::SetSoundByIndex(USQEXSEADSoundBank* SoundBank, int32 SoundIndex) {
}

void USQEXSEADSoundComponent::SetSound(USQEXSEADSoundBank* SoundBank, FName SoundName) {
}

void USQEXSEADSoundComponent::SetSection(FName InSectionName) {
}

void USQEXSEADSoundComponent::SetPitchMultiplier(float NewPitchMultiplier, float FadeTimeDuration) {
}

void USQEXSEADSoundComponent::SetPaused(bool bPause, float FadeTimeDuration) {
}

void USQEXSEADSoundComponent::SetMode(FName InModeName) {
}

void USQEXSEADSoundComponent::Play() {
}

bool USQEXSEADSoundComponent::IsPlaying() const {
    return false;
}

ESQEXSEADSoundState USQEXSEADSoundComponent::GetPlayState() const {
    return ESQEXSEADSoundState::Unknown;
}

float USQEXSEADSoundComponent::GetCurrentSectionPlaySec() {
    return 0.0f;
}

FName USQEXSEADSoundComponent::GetCurrentSection() {
    return NAME_None;
}

FName USQEXSEADSoundComponent::GetCurrentMode() {
    return NAME_None;
}

USQEXSEADSoundComponent::USQEXSEADSoundComponent() {
    this->bAutoDestroy = false;
    this->VolumeMultiplier = 1.00f;
    this->PitchMultiplier = 1.00f;
    this->FadeInTimeDuration = 0.00f;
    this->FadeOutTimeDuration = 0.00f;
    this->StartSeekTimeDuration = 0.00f;
    this->StartDelayTimeDuration = 0.00f;
    this->SwitchValue = 0.00f;
    this->ExternalID = -1;
    this->Is3DAudio = false;
    this->LRPan = 0.00f;
    this->OverrideAttenuationAsset = NULL;
    this->bOverrideAttenuation = false;
    this->InnerRange = 0.00f;
    this->AudibleRange = 3000.00f;
    this->bAttach = false;
    this->AttachLocationRule = EAttachmentRule::KeepRelative;
    this->AttachRotationRule = EAttachmentRule::KeepRelative;
    this->AttachScaleRule = EAttachmentRule::KeepRelative;
}

