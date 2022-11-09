#include "ShinsenWidgetFieldButtonDetailLabel.h"

void UShinsenWidgetFieldButtonDetailLabel::SetTextId(const FString& ID) {
}

UShinsenWidgetFieldButtonDetailLabel::UShinsenWidgetFieldButtonDetailLabel() : UUserWidget(FObjectInitializer::Get()) {
    this->Image_Base = NULL;
    this->TextBlock_Title_L = NULL;
    this->TextBlock_Title_R = NULL;
    this->bLeft = true;
}

