#include "LwSysInputAxis.h"

void ULwSysInputAxis::Clear() {
}

ULwSysInputAxis::ULwSysInputAxis() {
    this->bExecuteWhenPaused = false;
    this->DeadZone = 0.10f;
    this->InputValue = 0.00f;
    this->OriginalValue = 0.00f;
}

