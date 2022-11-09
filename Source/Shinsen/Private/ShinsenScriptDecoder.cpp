#include "ShinsenScriptDecoder.h"

class AShinsenCharacter;

void UShinsenScriptDecoder::TimeMinuteChanged_Implementation() {
}

void UShinsenScriptDecoder::SetTrackCameraWait(bool Flag) {
}

void UShinsenScriptDecoder::SetSkipAll(bool InIsRapid) {
}

void UShinsenScriptDecoder::SetSelectId(int32 ID, bool isSetup) {
}

void UShinsenScriptDecoder::SetSelectEnd() {
}

void UShinsenScriptDecoder::SetOk() {
}

void UShinsenScriptDecoder::SetMessageSize(FVector2D Size, int32 Index, EMessageMode Mode) {
}

void UShinsenScriptDecoder::SetLoadWait(bool Flag) {
}

void UShinsenScriptDecoder::SetLevelSequenceWait(bool Flag) {
}

void UShinsenScriptDecoder::SetLevelSequenceEnd() {
}

void UShinsenScriptDecoder::SetForceWait(bool Flag, EScriptCommand Command) {
}

void UShinsenScriptDecoder::SetFadeWait(bool Flag) {
}

void UShinsenScriptDecoder::SetDefaultFontColor(FLinearColor in_color) {
}

void UShinsenScriptDecoder::SetCharTurnWait(bool Flag) {
}

void UShinsenScriptDecoder::SetCharSpawnWait(bool in_flag) {
}

void UShinsenScriptDecoder::SetCharMoveWait(bool Flag) {
}

void UShinsenScriptDecoder::SetCharLookWait(bool Flag) {
}

void UShinsenScriptDecoder::SetCharDestroyCancel(bool in_flag) {
}

void UShinsenScriptDecoder::SetCharAnimWait(bool Flag) {
}

void UShinsenScriptDecoder::SetChangeBSWait(bool in_flag) {
}

void UShinsenScriptDecoder::SetCancel() {
}

void UShinsenScriptDecoder::SetCameraShakeWait(bool Flag) {
}

void UShinsenScriptDecoder::SetBgMaskFadeWait(bool Flag) {
}

void UShinsenScriptDecoder::SetBgFadeWait(bool Flag) {
}

void UShinsenScriptDecoder::SetAllClearEnd() {
}

void UShinsenScriptDecoder::ResetMapChangeBgm() {
}

int64 UShinsenScriptDecoder::PlaySe(const FString& in_path) {
    return 0;
}

bool UShinsenScriptDecoder::IsUpdateText() {
    return false;
}

bool UShinsenScriptDecoder::IsTimeElapseEnabled() {
    return false;
}

bool UShinsenScriptDecoder::IsThereWaitingEvent() {
    return false;
}

bool UShinsenScriptDecoder::IsSkipRapid() {
    return false;
}

bool UShinsenScriptDecoder::IsSkipAll() {
    return false;
}

bool UShinsenScriptDecoder::IsRunning() {
    return false;
}

bool UShinsenScriptDecoder::IsPageEnd() {
    return false;
}

bool UShinsenScriptDecoder::IsCharSpawnWait() {
    return false;
}

bool UShinsenScriptDecoder::IsCharDestroyCancel() {
    return false;
}

bool UShinsenScriptDecoder::IsChangeBSWait() {
    return false;
}

void UShinsenScriptDecoder::InitWork() {
}

void UShinsenScriptDecoder::InitMapChangeAfterFade() {
}

void UShinsenScriptDecoder::InitMapChange() {
}

int32 UShinsenScriptDecoder::GetTrackCameraEaseSteps(int32& Steps) {
    return 0;
}

float UShinsenScriptDecoder::GetTrackCameraEaseInOutExp(float Alpha, float& InExp, float& OutExp) {
    return 0.0f;
}

TEnumAsByte<EEasingFunc::Type> UShinsenScriptDecoder::GetTrackCameraEaseFuncType() {
    return EEasingFunc::Linear;
}

FString UShinsenScriptDecoder::GetTargetCharID() {
    return TEXT("");
}

void UShinsenScriptDecoder::GetSelectMessageArray(TArray<FScriptMessage>& MessageArray) {
}

int32 UShinsenScriptDecoder::GetSelectId() {
    return 0;
}

void UShinsenScriptDecoder::GetQuestionMessageArray(TArray<FScriptMessage>& MessageArray) {
}

void UShinsenScriptDecoder::GetMessageArray(TArray<FScriptMessage>& MessageArray, EMessageMode Mode) {
}

EMapChangeBgm UShinsenScriptDecoder::GetMapChangeBgmType() {
    return EMapChangeBgm::Normal;
}

FString UShinsenScriptDecoder::GetMapChangeBgmSelectID() {
    return TEXT("");
}

bool UShinsenScriptDecoder::GetGamePaused() {
    return false;
}

AShinsenCharacter* UShinsenScriptDecoder::GetChar(FString& in_id) {
    return NULL;
}

void UShinsenScriptDecoder::EndMapChange() {
}

void UShinsenScriptDecoder::ClearWaitingEvent() {
}

bool UShinsenScriptDecoder::CallEventScriptPath(FName in_path, FName in_label) {
    return false;
}

bool UShinsenScriptDecoder::CallEventScriptId(FName in_id) {
    return false;
}

UShinsenScriptDecoder::UShinsenScriptDecoder() {
}

