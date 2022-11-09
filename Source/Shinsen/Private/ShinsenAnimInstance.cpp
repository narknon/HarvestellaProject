#include "ShinsenAnimInstance.h"

class USQEXSEADSoundBank;

void UShinsenAnimInstance::SetMoveLoopSe(USQEXSEADSoundBank* Idle, USQEXSEADSoundBank* Move) {
}

void UShinsenAnimInstance::SetCanUpdateMoveLoopSe(const bool bFlag) {
}

FShinsenAnimInstance_LookAtResult UShinsenAnimInstance::GetLookAtResult(const int32 Index) {
    return FShinsenAnimInstance_LookAtResult{};
}

void UShinsenAnimInstance::FinishMoveLoopSe() {
}

UShinsenAnimInstance::UShinsenAnimInstance() {
    this->IdleSeSoundBank = NULL;
    this->MoveSeSoundBank = NULL;
}

