#include "ShinsenSound.h"

class USQEXSEADSoundBank;
class UObject;
class USceneComponent;

bool UShinsenSound::StopByDelegate(UObject* InObject, FSQEXSeadHandleBP Handle, float FadeOutTime, FTimerDynamicDelegate OnFinished, FTimerHandle& TimerHandle) {
    return false;
}

void UShinsenSound::StopBgm_BP(float FadeOutTime) {
}

void UShinsenSound::StopBgm(float InFadeOutTime) {
}

bool UShinsenSound::Stop(FSQEXSeadHandleBP InHandle, float InFadeOutTime) {
    return false;
}

void UShinsenSound::SetVoiceType(int32 Type) {
}

void UShinsenSound::SetVoiceLanguage(ELanguage Language) {
}

bool UShinsenSound::SetSeadVolumeEnable(const FName& Tag, bool bEnable) {
    return false;
}

bool UShinsenSound::SeadLayoutSoundEnable(const FName& Tag, bool bEnable) {
    return false;
}

FSQEXSeadHandleBP UShinsenSound::PlayVoiceAttached(USceneComponent* InComponent, FName InAttachSocketName, USQEXSEADSoundBank* InSoundBank) {
    return FSQEXSeadHandleBP{};
}

FSQEXSeadHandleBP UShinsenSound::PlayVoice3D(UObject* InObject, FVector InLocation, USQEXSEADSoundBank* InSoundBank) {
    return FSQEXSeadHandleBP{};
}

FSQEXSeadHandleBP UShinsenSound::PlayVoice2D(UObject* InObject, USQEXSEADSoundBank* InSoundBank) {
    return FSQEXSeadHandleBP{};
}

FSQEXSeadHandleBP UShinsenSound::PlaySeAttached(USceneComponent* InComponent, FName InAttachSocketName, USQEXSEADSoundBank* InSoundBank) {
    return FSQEXSeadHandleBP{};
}

FSQEXSeadHandleBP UShinsenSound::PlaySe3D(UObject* InObject, FVector InLocation, USQEXSEADSoundBank* InSoundBank) {
    return FSQEXSeadHandleBP{};
}

FSQEXSeadHandleBP UShinsenSound::PlaySe2D(UObject* InObject, USQEXSEADSoundBank* InSoundBank) {
    return FSQEXSeadHandleBP{};
}

void UShinsenSound::PlayBgm(const FString& InBgmID, float InFadeTime, float InStartSeekTime) {
}

void UShinsenSound::PauseBgm(bool bInPause, float InFadeOutTime) {
}

bool UShinsenSound::Pause(FSQEXSeadHandleBP InHandle, bool bInPause, float InFadeTime) {
    return false;
}

bool UShinsenSound::IsValid(FSQEXSeadHandleBP InHandle) {
    return false;
}

bool UShinsenSound::IsPlaying(FSQEXSeadHandleBP InHandle) {
    return false;
}

bool UShinsenSound::IsPausing(FSQEXSeadHandleBP InHandle) {
    return false;
}

bool UShinsenSound::isLoop(USQEXSEADSoundBank* InSoundBank, FName SoundName) {
    return false;
}

float UShinsenSound::GetOptionVolumeMovie() {
    return 0.0f;
}

float UShinsenSound::GetDuration(USQEXSEADSoundBank* InSoundBank, FName SoundName) {
    return 0.0f;
}

bool UShinsenSound::CallSeadEvent(const FName& Label, bool bBegin) {
    return false;
}

UShinsenSound::UShinsenSound() {
    this->SoundBankBgm = NULL;
    this->SoundBankBgmFadeOut = NULL;
    this->VoiceLanguage = ELanguage::ja;
    this->VoiceType = 0;
    this->EventLabelTable = NULL;
    this->EventController = NULL;
}

