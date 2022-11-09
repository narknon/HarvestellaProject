#include "ShinsenBTTask_SetOtherEnemyBlackboardValue.h"

UShinsenBTTask_SetOtherEnemyBlackboardValue::UShinsenBTTask_SetOtherEnemyBlackboardValue() {
    this->EnemyType = ShinsenBTTask_SetOtherEnemyBlackboardValueEnemyTypes::CharID;
    this->ValueType = EShinsenBTTask_SetOtherEnemyBlackboardValueValueTypes::S32;
    this->ValueS32 = 0;
    this->ValueF32 = 0.00f;
    this->ValueBool = false;
}

