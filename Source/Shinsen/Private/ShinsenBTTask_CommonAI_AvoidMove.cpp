#include "ShinsenBTTask_CommonAI_AvoidMove.h"

UShinsenBTTask_CommonAI_AvoidMove::UShinsenBTTask_CommonAI_AvoidMove() {
    this->GiveupTime = 15.00f;
    this->GoalAfterWaitTime = 4.00f;
    this->UpdateInterval = 2.00f;
    this->CharacterRadiusMultiple = 2.00f;
    this->AvoidDistanceMultiple = 1.00f;
    this->bShowDebugBox = false;
}

