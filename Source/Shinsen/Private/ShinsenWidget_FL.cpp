#include "ShinsenWidget_FL.h"

class UTexture2D;

FLinearColor UShinsenWidget_FL::White() {
    return FLinearColor{};
}

FLinearColor UShinsenWidget_FL::Red() {
    return FLinearColor{};
}

FLinearColor UShinsenWidget_FL::Green() {
    return FLinearColor{};
}

FLinearColor UShinsenWidget_FL::Gray() {
    return FLinearColor{};
}

float UShinsenWidget_FL::GetTransitionTime() {
    return 0.0f;
}

float UShinsenWidget_FL::GetTransitionSpeed() {
    return 0.0f;
}

UTexture2D* UShinsenWidget_FL::GetKeyTexture(FKey Key, int32 Type) {
    return NULL;
}

FString UShinsenWidget_FL::GetKeyFontCode(FKey Key) {
    return TEXT("");
}

FString UShinsenWidget_FL::ConvertTxtKeyCode(const FString& String) {
    return TEXT("");
}

UShinsenWidget_FL::UShinsenWidget_FL() {
}

