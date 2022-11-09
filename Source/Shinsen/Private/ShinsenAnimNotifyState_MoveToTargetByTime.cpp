#include "ShinsenAnimNotifyState_MoveToTargetByTime.h"

UShinsenAnimNotifyState_MoveToTargetByTime::UShinsenAnimNotifyState_MoveToTargetByTime() {
    this->MaxDistance = 800.00f;
    this->bStopNearTarget = false;
    this->StopDistanceFromTarget = 200.00f;
}

