#include "ShinsenAnimNotify_PlayEffectParticleForTarget.h"

UShinsenAnimNotify_PlayEffectParticleForTarget::UShinsenAnimNotify_PlayEffectParticleForTarget() {
    this->bHitStopEnabled = false;
    this->SpawnLocationBase = EShinsenAnimNotify_PlayEffectParticleForTargetSpawnLocationBase::Target;
    this->bSrcToTargetDirWhenNotAttached = false;
    this->bUseSocketPrefix = false;
    this->bUseAttachParentBound = false;
    this->BoundsScale = 1.00f;
}

