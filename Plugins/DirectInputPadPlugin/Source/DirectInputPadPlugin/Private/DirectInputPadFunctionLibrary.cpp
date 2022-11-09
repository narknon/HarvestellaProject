#include "DirectInputPadFunctionLibrary.h"

class UDirectInputPadJoystick;

bool UDirectInputPadFunctionLibrary::SaveDirectInputPadKeyMap(const FString& SlotName, int32 UserIndex) {
    return false;
}

bool UDirectInputPadFunctionLibrary::LoadDirectInputPadKeyMap(const FString& SlotName, int32 UserIndex) {
    return false;
}

bool UDirectInputPadFunctionLibrary::IsInitilizedDirectInputPadPlugin() {
    return false;
}

int32 UDirectInputPadFunctionLibrary::GetXInputPadNum() {
    return 0;
}

int32 UDirectInputPadFunctionLibrary::GetDirectInputPadNum() {
    return 0;
}

UDirectInputPadJoystick* UDirectInputPadFunctionLibrary::GetDirectInputPadJoystick(int32 PlayerIndex) {
    return NULL;
}

UDirectInputPadFunctionLibrary::UDirectInputPadFunctionLibrary() {
}

