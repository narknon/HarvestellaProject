#include "ShinsenWidgetFieldItemSelectChild.h"

void UShinsenWidgetFieldItemSelectChild::UpdateAvailable() {
}

void UShinsenWidgetFieldItemSelectChild::SetItem(const FItem& InItem) {
}

UShinsenWidgetFieldItemSelectChild::UShinsenWidgetFieldItemSelectChild() : UUserWidget(FObjectInitializer::Get()) {
    this->Image_Icon = NULL;
    this->Image_Bg = NULL;
    this->TextBlock_Num = NULL;
    this->ItemNum = 0;
    this->TextureFrameNormal = NULL;
    this->TextureFrameHQ = NULL;
}

