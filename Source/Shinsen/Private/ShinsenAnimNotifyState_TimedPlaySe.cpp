#include "ShinsenAnimNotifyState_TimedPlaySe.h"

UShinsenAnimNotifyState_TimedPlaySe::UShinsenAnimNotifyState_TimedPlaySe() {
    this->SoundBank = NULL;
    this->VolumeMultiplier = 1.00f;
    this->PitchMultiplier = 1.00f;
    this->bFollow = true;
    this->CanceledFadeOut = 0.25f;
}

