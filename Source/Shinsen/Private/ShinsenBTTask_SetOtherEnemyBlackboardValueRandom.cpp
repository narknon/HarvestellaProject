#include "ShinsenBTTask_SetOtherEnemyBlackboardValueRandom.h"

UShinsenBTTask_SetOtherEnemyBlackboardValueRandom::UShinsenBTTask_SetOtherEnemyBlackboardValueRandom() {
    this->EnemyType = ShinsenBTTask_SetOtherEnemyBlackboardValueRandomEnemyTypes::CharID;
    this->ValueType = EShinsenBTTask_SetOtherEnemyBlackboardValueRandomValueTypes::S32;
    this->ValueS32Min = 0;
    this->ValueS32Max = 0;
    this->ValueF32Min = 0.00f;
    this->ValueF32Max = 0.00f;
}

