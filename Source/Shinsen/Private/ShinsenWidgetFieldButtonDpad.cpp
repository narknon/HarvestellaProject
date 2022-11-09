#include "ShinsenWidgetFieldButtonDpad.h"

UShinsenWidgetFieldButtonDpad::UShinsenWidgetFieldButtonDpad() : UUserWidget(FObjectInitializer::Get()) {
    this->Image_u = NULL;
    this->Image_l = NULL;
    this->Image_b = NULL;
    this->Image_r = NULL;
    this->Image_u_icon = NULL;
    this->Image_l_icon = NULL;
    this->Image_b_icon = NULL;
    this->Image_r_icon = NULL;
    this->ProgressBar_u = NULL;
    this->ProgressBar_l = NULL;
    this->ProgressBar_b = NULL;
    this->ProgressBar_r = NULL;
    this->Image_ButtonGuideDpad = NULL;
    this->Image_ButtonGuideZR = NULL;
    this->Image_Button = NULL;
    this->Image_u_Button = NULL;
    this->Image_l_Button = NULL;
    this->Image_r_Button = NULL;
    this->TextureIconBattle.AddDefaulted(12);
    this->TextureIconFarm.AddDefaulted(6);
    this->TextureFrameNormal = NULL;
    this->TextureFrameCurrent = NULL;
}

