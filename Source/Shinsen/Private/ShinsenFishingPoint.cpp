#include "ShinsenFishingPoint.h"

class UShinsenWidgetBase;

void AShinsenFishingPoint::SetupFishingFlag() {
}

bool AShinsenFishingPoint::IsDebugFishing() const {
    return false;
}

UShinsenWidgetBase* AShinsenFishingPoint::CreateResultWidget(const FString& FishID, int32 Size, bool bDisableFising) {
    return NULL;
}

bool AShinsenFishingPoint::CanFishingTime() const {
    return false;
}

AShinsenFishingPoint::AShinsenFishingPoint() {
    this->MiniMapSubID = -1;
}

