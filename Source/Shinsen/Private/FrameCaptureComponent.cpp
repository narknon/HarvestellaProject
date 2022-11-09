#include "FrameCaptureComponent.h"

void UFrameCaptureComponent::CaptureScene() {
}

UFrameCaptureComponent::UFrameCaptureComponent() {
    this->bCaptureEveryFrame = true;
    this->TextureTarget = NULL;
}

