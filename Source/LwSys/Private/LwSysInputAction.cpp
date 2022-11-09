#include "LwSysInputAction.h"

void ULwSysInputAction::Clear() {
}

ULwSysInputAction::ULwSysInputAction() {
    this->bExecuteWhenPaused = false;
    this->RepeatFirstTime = 0.50f;
    this->RepeatTime = 0.07f;
    this->bRepeatDisalbePressedBroadcastFirst = false;
    this->RepeatCount = 0;
}

