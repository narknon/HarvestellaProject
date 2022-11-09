#include "ShinsenBTTask_MoveToPlayerTarget.h"

UShinsenBTTask_MoveToPlayerTarget::UShinsenBTTask_MoveToPlayerTarget() {
    this->bJudgeNotGoalTimeOut = false;
    this->NotGoalTimeOutTime = 0.10f;
    this->bTaskFailedNotGoalTimeOut = true;
    this->AcceptanceRadius = 50.00f;
    this->AcceptanceRadiusRandomDeviation = 0.00f;
    this->TaskFailedDeltaMovingDistance = 3.33f;
}

