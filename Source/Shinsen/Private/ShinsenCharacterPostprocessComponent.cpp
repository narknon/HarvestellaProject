#include "ShinsenCharacterPostprocessComponent.h"

UShinsenCharacterPostprocessComponent::UShinsenCharacterPostprocessComponent() {
    this->ScaleStart = 0.10f;
    this->ScaleEnd = 0.05f;
    this->DamageEffectStartHpPercentage = 25.00f;
    this->DamageEffectMaxHpPercentage = 0.00f;
    this->DamageEffectStartRate = 2.00f;
    this->DamageEffectMaxRate = 8.00f;
    this->MIDDamage = NULL;
    this->CurveAsset = NULL;
}

