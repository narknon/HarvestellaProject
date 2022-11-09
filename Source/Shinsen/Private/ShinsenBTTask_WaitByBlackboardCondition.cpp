#include "ShinsenBTTask_WaitByBlackboardCondition.h"

UShinsenBTTask_WaitByBlackboardCondition::UShinsenBTTask_WaitByBlackboardCondition() {
    this->ValueType = EShinsenBTTask_WaitByBlackboardConditionValueTypes::S32;
    this->ValueS32 = 0;
    this->ValueF32 = 0.00f;
    this->ValueBool = false;
    this->Conditions = EShinsenBTDecorator_WaitByBlackboardConditionConditions::GreaterThan;
}

