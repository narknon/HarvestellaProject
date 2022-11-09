#include "DirectInputPadJoystick.h"

void UDirectInputPadJoystick::SetKeyMap(TEnumAsByte<EXInputPadKeyNames> XIKey, TEnumAsByte<EDirectInputPadKeyNames> DIKey, bool bNegative) {
}

void UDirectInputPadJoystick::SetAxisReverse(TEnumAsByte<EDirectInputPadKeyNames> DIAxis, bool bReverse) {
}

bool UDirectInputPadJoystick::IsChagnedKeyState() const {
    return false;
}

bool UDirectInputPadJoystick::IsAxisReverse(TEnumAsByte<EDirectInputPadKeyNames> DIAxis) {
    return false;
}

FString UDirectInputPadJoystick::GetProductName() {
    return TEXT("");
}

int32 UDirectInputPadJoystick::GetPlayerIndex() const {
    return 0;
}

TArray<FDIKeyMapInfo> UDirectInputPadJoystick::GetKeyMap(TEnumAsByte<EXInputPadKeyNames> eDIKey) {
    return TArray<FDIKeyMapInfo>();
}

FString UDirectInputPadJoystick::GetGUID() {
    return TEXT("");
}

FDIGamePadKeyState UDirectInputPadJoystick::GetChangedKeyState(bool bReal, bool bBtn) {
    return FDIGamePadKeyState{};
}

TArray<FDIGamePadKeyState> UDirectInputPadJoystick::GetAllChangedKeyState(bool bReal) {
    return TArray<FDIGamePadKeyState>();
}

void UDirectInputPadJoystick::ClearInput() {
}

UDirectInputPadJoystick::UDirectInputPadJoystick() {
}

