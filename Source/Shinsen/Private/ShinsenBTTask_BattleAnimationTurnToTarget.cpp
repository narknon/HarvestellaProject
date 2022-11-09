#include "ShinsenBTTask_BattleAnimationTurnToTarget.h"

UShinsenBTTask_BattleAnimationTurnToTarget::UShinsenBTTask_BattleAnimationTurnToTarget() {
    this->bUseBlackboard = false;
    this->BeforeDelay = 2.00f;
    this->AfterDelay = 1.00f;
    this->AnimationSpeed = 1.00f;
    this->IgroneAngle = 10.00f;
    this->ClampAngle = 180.00f;
    this->ActorRotationSpeed = 1.00f;
}

