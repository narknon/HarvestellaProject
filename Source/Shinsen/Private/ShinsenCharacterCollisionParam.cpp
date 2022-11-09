#include "ShinsenCharacterCollisionParam.h"

FShinsenCharacterCollisionParam::FShinsenCharacterCollisionParam() {
    this->DamageRate = 0;
    this->HitStopFrame = 0;
    this->HitNum = 0;
    this->HitIntervalFrame = 0;
    this->CameraShakeFrame = 0;
    this->CameraShakeScale = 0.00f;
    this->bUnifyShapesHitsWhenMultiHit = false;
    this->DamageKind = ECharacterDamageKind::None;
    this->ArmorLevel = ECharacterArmorLevel::None;
    this->bKnockBack = false;
    this->KnockBackSpeed = 0.00f;
    this->KnockBackLerpSpeed = 0.00f;
    this->bKnockBackVectorAttacker = false;
    this->bKnockBackVectorInverse = false;
    this->bKnockBackStopNearCollision = false;
    this->HitAttribute = ECharacterHitAttribute::None;
    this->HitSeVolumeMulti = 0.00f;
    this->OverrideHitSoundBank = NULL;
    this->OverrideHitParticle = NULL;
    this->OverrideHitNiagara = NULL;
    this->bUseForceFeedback = false;
    this->ForceFeedbackType = EForceFeedbackType::LEVEL1;
    this->ForceFeedbackTime = 0.00f;
}

