#include "ShinsenWidgetFieldGaugeFriend.h"

UShinsenWidgetFieldGaugeFriend::UShinsenWidgetFieldGaugeFriend() : UUserWidget(FObjectInitializer::Get()) {
    this->CanvasPanel_Root = NULL;
    this->ProgressBar_Hp = NULL;
    this->ProgressBar_HpDelay = NULL;
    this->TextBlock_Name = NULL;
    this->TextBlock_Hp = NULL;
    this->Image_Frame = NULL;
    this->Image_Button = NULL;
    this->Image_SpAttackBlur = NULL;
    this->TextureButton.AddDefaulted(2);
    this->FriendIndex = 0;
}

