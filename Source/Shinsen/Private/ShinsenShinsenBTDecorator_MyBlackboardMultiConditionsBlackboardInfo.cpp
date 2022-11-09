#include "ShinsenShinsenBTDecorator_MyBlackboardMultiConditionsBlackboardInfo.h"

FShinsenShinsenBTDecorator_MyBlackboardMultiConditionsBlackboardInfo::FShinsenShinsenBTDecorator_MyBlackboardMultiConditionsBlackboardInfo() {
    this->ValueType = EShinsenShinsenBTDecorator_MyBlackboardMultiConditionsValueTypes::S32;
    this->ValueS32 = 0;
    this->ValueF32 = 0.00f;
    this->ValueBool = false;
    this->Conditions = EShinsenShinsenBTDecorator_MyBlackboardMultiConditionsConditions::GreaterThan;
}

