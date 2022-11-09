#include "ShinsenAnimNotifyState_SlotMaterialParamater.h"

UShinsenAnimNotifyState_SlotMaterialParamater::UShinsenAnimNotifyState_SlotMaterialParamater() {
    this->ParamaterValue = 0.00f;
    this->Mid = NULL;
    this->MaterialOrg = NULL;
    this->SlotIndex = 0;
    this->RestoreValue = 0.00f;
    this->bExecRestoreValue = false;
}

