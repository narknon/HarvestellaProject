#include "ShinsenWidgetFieldGaugeEnemy.h"

UShinsenWidgetFieldGaugeEnemy::UShinsenWidgetFieldGaugeEnemy() : UUserWidget(FObjectInitializer::Get()) {
    this->CanvasPanel_Root = NULL;
    this->CanvasPanel_Dps = NULL;
    this->ProgressBar_Hp = NULL;
    this->ProgressBar_HpDelay = NULL;
    this->ProgressBar_Dps = NULL;
    this->TextBlock_Name = NULL;
    this->FieldStatusEffectIcons = NULL;
}

