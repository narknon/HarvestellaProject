#include "ShinsenBTDecorator_CharacterDistance.h"

UShinsenBTDecorator_CharacterDistance::UShinsenBTDecorator_CharacterDistance() {
    this->SearchType = EShinsenBTDecorator_CharacterDistanceSearchType::Player;
    this->CheckType = EShinsenBTDecorator_CharacterDistanceCheckType::Distance;
    this->Distance = 0.00f;
    this->DistanceConditions = EShinsenBTDecorator_CharacterDistanceConditions::LessThan;
}

