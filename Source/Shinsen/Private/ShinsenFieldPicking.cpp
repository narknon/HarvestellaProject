#include "ShinsenFieldPicking.h"

AShinsenFieldPicking::AShinsenFieldPicking() {
    this->PickingType = EPickingType::None;
    this->DropLevel = 0;
    this->DropNumMax = 0;
    this->bTargetVisibility = false;
    this->bDispMiniMapIcon = false;
    this->MiniMapSubID = -1;
}

