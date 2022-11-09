#include "SQEXSEADAudioSection.h"

class USQEXSEADSoundBank;

void USQEXSEADAudioSection::SetStartOffset(FFrameNumber InStartOffset) {
}

void USQEXSEADAudioSection::SetSoundName(FName SoundName) {
}

void USQEXSEADAudioSection::SetSoundIndex(int32 SoundIndex) {
}

void USQEXSEADAudioSection::SetSoundBank(USQEXSEADSoundBank* InSound) {
}

FFrameNumber USQEXSEADAudioSection::GetStartOffset() const {
    return FFrameNumber{};
}

FName USQEXSEADAudioSection::GetSoundName() const {
    return NAME_None;
}

int32 USQEXSEADAudioSection::GetSoundIndex() const {
    return 0;
}

USQEXSEADSoundBank* USQEXSEADAudioSection::GetSoundBank() const {
    return NULL;
}

USQEXSEADAudioSection::USQEXSEADAudioSection() {
    this->FadeOutTime = 0.20f;
    this->bOverrideAttenuation = false;
    this->AttenuationSettings = NULL;
    this->bAttach = false;
}

