#include "ShinsenSaveGame.h"

void UShinsenSaveGame::SetDefaultValue() {
}

bool UShinsenSaveGame::SaveSystem() {
    return false;
}

bool UShinsenSaveGame::SaveGame(const int32 InSlotIndex) {
    return false;
}

void UShinsenSaveGame::Save() {
}

bool UShinsenSaveGame::LoadSystem() {
    return false;
}

bool UShinsenSaveGame::LoadGameTemp(const int32 InSlotIndex) {
    return false;
}

bool UShinsenSaveGame::LoadGame(const int32 InSlotIndex) {
    return false;
}

void UShinsenSaveGame::Load() {
}

bool UShinsenSaveGame::IsSuccess() {
    return false;
}

bool UShinsenSaveGame::IsBusySaveOrLoad() {
    return false;
}

bool UShinsenSaveGame::DoesTrialSaveExist() {
    return false;
}

bool UShinsenSaveGame::DoesSystemSaveExist() {
    return false;
}

bool UShinsenSaveGame::DoesGameSaveExist(const int32 InSlotIndex) {
    return false;
}

void UShinsenSaveGame::ConvertTrialSave() {
}

UShinsenSaveGame::UShinsenSaveGame() {
    this->PlayerName = TEXT("Player");
}

