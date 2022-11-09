#include "ShinsenWidgetMinimap.h"

void UShinsenWidgetMinimap::UpdateTexture() {
}

int32 UShinsenWidgetMinimap::UpdateOpenArea() {
    return 0;
}

void UShinsenWidgetMinimap::SetMiniMapOpened(const FString& MinimapID) {
}

void UShinsenWidgetMinimap::SetEnableRotate(bool bEnable) {
}

bool UShinsenWidgetMinimap::IsNeedUpdateIconList() const {
    return false;
}

bool UShinsenWidgetMinimap::IsEnableRotate() {
    return false;
}

bool UShinsenWidgetMinimap::IsDebugDisp() const {
    return false;
}

void UShinsenWidgetMinimap::InitAreaMask() {
}

void UShinsenWidgetMinimap::HideOtherUI(bool bHide) {
}

bool UShinsenWidgetMinimap::GetMiniMapOpened(const FString& MinimapID) {
    return false;
}

FString UShinsenWidgetMinimap::GetIconListKindText(EMapIconListKind Kind) const {
    return TEXT("");
}

EMapIconListKind UShinsenWidgetMinimap::GetIconListKind(EMapIconType InType) {
    return EMapIconListKind::Player;
}

void UShinsenWidgetMinimap::GetFearInfo(int32 SubID, bool bOtherFloor, TArray<FMiniMapFearInfo>& Info) {
}

void UShinsenWidgetMinimap::GetDispIconInfo(int32 SubID, bool bOtherFloor, TArray<FMiniMapIconInfo>& Info) {
}

void UShinsenWidgetMinimap::GetAreaOpenFlagFromSave() {
}

void UShinsenWidgetMinimap::CopyAreaMaskWideTextureToArray() {
}

void UShinsenWidgetMinimap::CopyAreaMaskTextureToArray() {
}

void UShinsenWidgetMinimap::ClearAreaMaskWideTextureArray() {
}

void UShinsenWidgetMinimap::ClearAreaMaskTextureArray() {
}

UShinsenWidgetMinimap::UShinsenWidgetMinimap() {
    this->EnableUpdateOpenArea = false;
    this->AreaMax = 256;
    this->AreaMaskTexture = NULL;
    this->AreaMaskTextureCopy = NULL;
    this->AreaMaskLookupTexture = NULL;
    this->AreaSize = 0.00f;
    this->AreaMaskWideTexture = NULL;
    this->AreaMaskWideTextureCopy = NULL;
    this->AreaSizeWide = 0.00f;
    this->bEnableRotate = false;
}

