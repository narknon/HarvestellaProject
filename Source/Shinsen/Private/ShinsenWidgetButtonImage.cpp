#include "ShinsenWidgetButtonImage.h"

void UShinsenWidgetButtonImage::UpdateImage() {
}

UShinsenWidgetButtonImage::UShinsenWidgetButtonImage() : UUserWidget(FObjectInitializer::Get()) {
    this->SettingID = EKeySettings::Action;
    this->Type = 0;
    this->ImageButton = NULL;
    this->bDispSubKey = false;
}

