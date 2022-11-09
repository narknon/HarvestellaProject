#include "ShinsenGameInstance.h"

class UWorld;

void UShinsenGameInstance::updateCharacterExp() {
}

void UShinsenGameInstance::SetPlayerJobSlotID(const FString& SlotName, const FString& JobID) {
}

void UShinsenGameInstance::setFriendCharId(int32 InIndex, const FString& InCharID) {
}

void UShinsenGameInstance::ReceiveInit_Implementation() {
}

FString UShinsenGameInstance::JobTypeToID(ECharacterJobType JobType) const {
    return TEXT("");
}

ECharacterJobType UShinsenGameInstance::JobIDToType(const FString& JobID) const {
    return ECharacterJobType::B00;
}

FString UShinsenGameInstance::GetPlayerJobSlotID(const FString& SlotName) const {
    return TEXT("");
}

int64 UShinsenGameInstance::GetMoney() {
    return 0;
}

FString UShinsenGameInstance::getFriendCharId(int32 InIndex) const {
    return TEXT("");
}

int32 UShinsenGameInstance::getCharacterLevelYesterday(const FString& InCharID) const {
    return 0;
}

int32 UShinsenGameInstance::getCharacterLevelMax(const FString& InCharID) const {
    return 0;
}

int32 UShinsenGameInstance::getCharacterLevelFromExp(const FString& InCharID, int32 InExp) const {
    return 0;
}

int32 UShinsenGameInstance::getCharacterLevel(const FString& InCharID) const {
    return 0;
}

int32 UShinsenGameInstance::getCharacterExpYesterday(const FString& InCharID) const {
    return 0;
}

int32 UShinsenGameInstance::getCharacterExpNow(const FString& InCharID) const {
    return 0;
}

void UShinsenGameInstance::EndLoadingScreen(UWorld* InLoadedWorld) {
}

void UShinsenGameInstance::clearFriendCharId(int32 InIndex) {
}

int64 UShinsenGameInstance::AddMoney(int64 Add) {
    return 0;
}

void UShinsenGameInstance::addCharacterExpNow(const FString& InCharID, int32 InExp) {
}

UShinsenGameInstance::UShinsenGameInstance() {
    this->SaveGame = NULL;
    this->MdManager = NULL;
    this->Sound = NULL;
    this->CharacterHitAttribute = NULL;
    this->CharacterAttribute = NULL;
    this->CharacterFieldAI = NULL;
    this->WidgetLoadingScreen = NULL;
    this->bIsFirstBoot = true;
    this->bIsRebootToCharaCreate = false;
    this->LatestSaveFileIndex = -1;
    this->bIsLastInputKeyboard = true;
    this->GlobalPlacedItemID = 0;
    this->BreakTimeUseSlotIndex = 0;
    this->bDeathSeasonVoiceAnnounced = false;
    this->bChangedSeasonVoiceAnnounced = false;
    this->bHarvestVoiceAnnounced = false;
    this->bLetterVoiceAnnounced = false;
    this->DebugSkeletalMeshActorParam = NULL;
    this->DebugPlayerSkeletalMeshParam = NULL;
    this->DebugLayoutGuide = NULL;
}

