#include "ShinsenAnimNotify_SetMyBlackboardValue.h"

UShinsenAnimNotify_SetMyBlackboardValue::UShinsenAnimNotify_SetMyBlackboardValue() {
    this->ValueType = EShinsenAnimNotify_SetMyBlackboardValueValueTypes::S32;
    this->ValueS32 = 0;
    this->ValueF32 = 0.00f;
    this->ValueBool = false;
    this->VectorValueType = EShinsenAnimNotify_SetMyBlackboardValueVectorValueTypes::World;
}

