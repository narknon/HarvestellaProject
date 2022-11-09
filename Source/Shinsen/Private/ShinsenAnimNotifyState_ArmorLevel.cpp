#include "ShinsenAnimNotifyState_ArmorLevel.h"

UShinsenAnimNotifyState_ArmorLevel::UShinsenAnimNotifyState_ArmorLevel() {
    this->ArmorLevel = ECharacterArmorLevel::Low;
    this->bClearArmorLevelAI = true;
    this->DamageCutRate = 0;
}

