#include "ShinsenAnimNotify_PlayEffectNiagaraForTarget.h"

UShinsenAnimNotify_PlayEffectNiagaraForTarget::UShinsenAnimNotify_PlayEffectNiagaraForTarget() {
    this->bHitStopEnabled = false;
    this->SpawnLocationBase = EShinsenAnimNotify_PlayEffectNiagaraForTargetSpawnLocationBase::Target;
    this->bSrcToTargetDirWhenNotAttached = false;
    this->bUseSocketPrefix = false;
    this->bUseAttachParentBound = false;
    this->BoundsScale = 1.00f;
}

