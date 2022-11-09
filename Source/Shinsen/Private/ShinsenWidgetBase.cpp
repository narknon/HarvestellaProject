#include "ShinsenWidgetBase.h"

class UProgressBar;
class UShinsenWidgetBase;
class UWidget;

void UShinsenWidgetBase::UpdateDelayGauge(FShinsenDelayGaugeWork& RefDelayGaugeWork, UProgressBar* InProgressBar, float InDeltaTime, float InRate, float InDelayTime) {
}

void UShinsenWidgetBase::Setup_Implementation(const FString& WidgetID, UShinsenWidgetBase* Root) {
}

void UShinsenWidgetBase::SetSeadEventMenuOpen(bool bOpen) {
}

void UShinsenWidgetBase::SetInputEnable(bool bEnable) {
}

void UShinsenWidgetBase::OnRepeatKey() {
}

void UShinsenWidgetBase::OnRepeatArrow() {
}



bool UShinsenWidgetBase::IsInputEnable() const {
    return false;
}

bool UShinsenWidgetBase::IsDebugSkipEnable() const {
    return false;
}































UWidget* UShinsenWidgetBase::GetCurrentFocusWidget_Implementation() {
    return NULL;
}

void UShinsenWidgetBase::EnableKeyRepeat(int32 EnableKey, float Rate, float FirstDelay) {
}

void UShinsenWidgetBase::EnableInput() {
}

void UShinsenWidgetBase::EnableArrowRepeat(float Rate, float FirstDelay) {
}

void UShinsenWidgetBase::DisableKeyRepeat(int32 DisableKey) {
}

void UShinsenWidgetBase::DisableInput() {
}

void UShinsenWidgetBase::DisableArrowRepeat() {
}

void UShinsenWidgetBase::DebugLog(const FString& String) {
}

void UShinsenWidgetBase::ClearDelayGauge(FShinsenDelayGaugeWork& RefDelayGaugeWork, UProgressBar* InProgressBar, float InRate) {
}

UShinsenWidgetBase::UShinsenWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->RepeatKeyEnable = 0;
    this->RepeatKeyRate = 0.10f;
    this->RepeatKeyFirstDelay = 0.40f;
    this->RepeatArrowEnable = false;
    this->RepeatArrowRate = 0.10f;
    this->RepeatArrowFirstDelay = 0.40f;
    this->RootWidget = NULL;
    this->WindowPlaybackSpeed = 3.33f;
    this->CursorMoveInterpSpeed = 15.00f;
}

