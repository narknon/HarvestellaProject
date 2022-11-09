#include "CharacterStatusEffectSave.h"

FCharacterStatusEffectSave::FCharacterStatusEffectSave() {
    this->Timer = 0.00f;
    this->IntervalTimer = 0.00f;
    this->BeginTime = 0;
    this->AttackPhysics = 0;
    this->AttackMagic = 0;
    this->MultiDot = 0;
    this->bBreakTime = false;
}

