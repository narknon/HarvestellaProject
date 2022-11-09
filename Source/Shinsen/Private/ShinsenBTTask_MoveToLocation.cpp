#include "ShinsenBTTask_MoveToLocation.h"

UShinsenBTTask_MoveToLocation::UShinsenBTTask_MoveToLocation() {
    this->bSetBlackboard = false;
    this->AspectRadius = 50.00f;
    this->bStopOnOverlap = true;
    this->IsTaskFailedWhenNotMoveFailed = true;
}

