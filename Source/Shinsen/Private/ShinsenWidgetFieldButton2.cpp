#include "ShinsenWidgetFieldButton2.h"

void UShinsenWidgetFieldButton2::SetItemIcon() {
}

UShinsenWidgetFieldButton2::UShinsenWidgetFieldButton2() : UUserWidget(FObjectInitializer::Get()) {
    this->Image_l_icon = NULL;
    this->Image_u_icon_frame = NULL;
    this->Image_u_icon = NULL;
    this->TextBlock_u = NULL;
    this->Image_Button = NULL;
    this->Image_u_Button = NULL;
    this->Image_l_Button = NULL;
    this->TextureIconBattle.AddDefaulted(12);
    this->TextureIconFarm.AddDefaulted(6);
    this->TextureFrameHQ = NULL;
}

