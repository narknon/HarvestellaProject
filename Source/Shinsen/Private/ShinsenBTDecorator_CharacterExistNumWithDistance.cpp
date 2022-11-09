#include "ShinsenBTDecorator_CharacterExistNumWithDistance.h"

UShinsenBTDecorator_CharacterExistNumWithDistance::UShinsenBTDecorator_CharacterExistNumWithDistance() {
    this->SearchType = EShinsenBTDecorator_CharacterExistNumWithDistanceSearchType::Player;
    this->Num = 0;
    this->NumConditions = EShinsenBTDecorator_CharacterExistNumWithDistanceConditions::GreaterThan;
    this->Distance = 0.00f;
    this->DistanceConditions = EShinsenBTDecorator_CharacterExistNumWithDistanceConditions::LessThan;
}

