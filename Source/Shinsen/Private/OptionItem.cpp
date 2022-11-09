#include "OptionItem.h"

FOptionItem::FOptionItem() {
    this->Type = EOptionItemType::LANG_TEXT;
    this->bIsBool = false;
    this->bIsLoop = false;
    this->bTitleOnly = false;
    this->bUseSlider = false;
    this->bHideInMainGame = false;
}

