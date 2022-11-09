#include "SQEXSEADVolume.h"
#include "Net/UnrealNetwork.h"

void ASQEXSEADVolume::SetPriority(float NewPriority) {
}

void ASQEXSEADVolume::SetEnabled(bool bNewEnabled) {
}

void ASQEXSEADVolume::SetEffectPreset(const FEffectPresetPackInfo& NewEffectPreset) {
}

void ASQEXSEADVolume::SetAmbientSound(const FAmbientSoundInfo& NewAmbientSound) {
}

void ASQEXSEADVolume::OnRep_bEnabled() {
}

void ASQEXSEADVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASQEXSEADVolume, bEnabled);
}

ASQEXSEADVolume::ASQEXSEADVolume() {
    this->bEnabled = true;
    this->bUseSimplifiedEncompassesPointCheck = true;
    this->Priority = 0.00f;
}

