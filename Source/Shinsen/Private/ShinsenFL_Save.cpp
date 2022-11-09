#include "ShinsenFL_Save.h"

class USaveGame;

bool UShinsenFL_Save::SaveGameToSlot(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex) {
    return false;
}

USaveGame* UShinsenFL_Save::LoadGameFromSlot(const FString& SlotName, const int32 UserIndex) {
    return NULL;
}

bool UShinsenFL_Save::DoesSaveGameExist(const FString& SlotName, const int32 UserIndex) {
    return false;
}

UShinsenFL_Save::UShinsenFL_Save() {
}

