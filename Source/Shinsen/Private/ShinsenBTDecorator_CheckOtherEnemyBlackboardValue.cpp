#include "ShinsenBTDecorator_CheckOtherEnemyBlackboardValue.h"

UShinsenBTDecorator_CheckOtherEnemyBlackboardValue::UShinsenBTDecorator_CheckOtherEnemyBlackboardValue() {
    this->EnemyType = EShinsenBTDecorator_CheckOtherEnemyBlackboardValueEnemyTypes::CharID;
    this->ValueType = EShinsenBTDecorator_CheckOtherEnemyBlackboardValueValueTypes::S32;
    this->ValueS32 = 0;
    this->ValueF32 = 0.00f;
    this->ValueBool = false;
    this->Conditions = EShinsenBTDecorator_CheckOtherEnemyBlackboardValueConditions::GreaterThan;
}

