#include "ShinsenWidgetFieldSkillAlert.h"

void UShinsenWidgetFieldSkillAlert::ShowAlert(ECharacterSkillNotAvaliableReason InType) {
}

UShinsenWidgetFieldSkillAlert::UShinsenWidgetFieldSkillAlert() : UUserWidget(FObjectInitializer::Get()) {
    this->CanvasPanel_Root = NULL;
    this->Image_Base = NULL;
    this->Image_Icon = NULL;
    this->TextBlock_AlertTextWithIcon = NULL;
    this->TextBlock_AlertTextNormal = NULL;
    this->DispTime = 1.00f;
}

