#include "ShinsenAnimNotifyState_BackFade.h"

UShinsenAnimNotifyState_BackFade::UShinsenAnimNotifyState_BackFade() {
    this->FadeRate = 0.30f;
    this->FadeTime = 0.20f;
    this->bSelfCharacter = true;
    this->bTargetCharacter = true;
    this->PostProcessVolume = NULL;
}

