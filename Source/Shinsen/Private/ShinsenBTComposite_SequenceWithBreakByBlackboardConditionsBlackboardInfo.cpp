#include "ShinsenBTComposite_SequenceWithBreakByBlackboardConditionsBlackboardInfo.h"

FShinsenBTComposite_SequenceWithBreakByBlackboardConditionsBlackboardInfo::FShinsenBTComposite_SequenceWithBreakByBlackboardConditionsBlackboardInfo() {
    this->ValueType = EShinsenBTComposite_SequenceWithBreakByBlackboardConditionsValueTypes::S32;
    this->ValueS32 = 0;
    this->ValueF32 = 0.00f;
    this->ValueBool = false;
    this->Conditions = EShinsenBTComposite_SequenceWithBreakByBlackboardConditionsConditions::GreaterThan;
}

