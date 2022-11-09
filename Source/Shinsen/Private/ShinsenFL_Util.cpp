#include "ShinsenFL_Util.h"

class UFont;
class AShinsenFarm;
class AShinsenCharacter;
class AScheduler;
class UShinsenMapComponent;
class UShinsenWeatherComponent;
class UShinsenMdManager;
class UShinsenTimeComponent;
class UShinsenScriptDecoder;
class UUserWidget;
class UShinsenScheduleComponent;

void UShinsenFL_Util::UpdateAllKeyImage() {
}

FString UShinsenFL_Util::TranslateTagText(const FString& InText) {
    return TEXT("");
}

void UShinsenFL_Util::StopForceFeedback() {
}

TArray<FString> UShinsenFL_Util::SplitPicTagText(const FString& InText) {
    return TArray<FString>();
}

TArray<FString> UShinsenFL_Util::SplitLineText(const FString& InText) {
    return TArray<FString>();
}

TArray<FString> UShinsenFL_Util::SplitFriendPassiveText(const FString& InText) {
    return TArray<FString>();
}

void UShinsenFL_Util::SetWindowType(EAppWindowType InType) {
}

void UShinsenFL_Util::SetWindowResolution(EResolution Resolution) {
}

void UShinsenFL_Util::SetVsyncEnable(bool bEnable) {
}

void UShinsenFL_Util::SetTrial(bool bFlag) {
}

void UShinsenFL_Util::SetSlateGlobalInvalidationEnable(bool bEnable) {
}

void UShinsenFL_Util::SetShowFlag(const FString& InShowName, bool bInFlag) {
}

bool UShinsenFL_Util::SetScheduler(AScheduler* InScheduler) {
    return false;
}

void UShinsenFL_Util::SetSalesRegionAsia(bool bInFlag) {
}

void UShinsenFL_Util::SetFpsLimit(EFpsLimit Limit) {
}

bool UShinsenFL_Util::SetFlagVar(const FString& InId, int32 InLength, int32 InValue) {
    return false;
}

bool UShinsenFL_Util::SetFlag(const FString& InId, bool InFlag) {
    return false;
}

bool UShinsenFL_Util::SetFarm(AShinsenFarm* InFarm) {
    return false;
}

FString UShinsenFL_Util::ReplaceUnsupportedCharacter(const UFont* Font, const FString& SourceStr, const FString& ReplaceStr) {
    return TEXT("");
}

void UShinsenFL_Util::ReloadMD() {
}

void UShinsenFL_Util::PrintDebugLog(const FString& Log) {
}

void UShinsenFL_Util::PlayMovie(const FString& Path) {
}

void UShinsenFL_Util::PlayForceFeedback(EForceFeedbackType Type, float Time) {
}

FString UShinsenFL_Util::PartyIDToCharID(const FString& InPartyID) {
    return TEXT("");
}

FString UShinsenFL_Util::JobTypeToID(ECharacterJobType InJobType) {
    return TEXT("");
}

ECharacterJobType UShinsenFL_Util::JobIDToType(const FString& InJobID) {
    return ECharacterJobType::B00;
}

bool UShinsenFL_Util::IsTrial() {
    return false;
}

bool UShinsenFL_Util::IsSalesRegionAsia() {
    return false;
}

bool UShinsenFL_Util::IsRuckItem(const FString& InItemID) {
    return false;
}

bool UShinsenFL_Util::IsCurrentMapWorldMap() {
    return false;
}

bool UShinsenFL_Util::IsBuildShipping() {
    return false;
}

bool UShinsenFL_Util::IsApplicationForeground() {
    return false;
}

bool UShinsenFL_Util::IsAllowSameKeySettings(EKeySettings Setting1, EKeySettings Setting2) {
    return false;
}

FString UShinsenFL_Util::GetTxtSystem(const FString& InId) {
    return TEXT("");
}

FString UShinsenFL_Util::GetTxtItemName(const FString& InId) {
    return TEXT("");
}

ELanguage UShinsenFL_Util::GetSteamLanguage() {
    return ELanguage::ja;
}

bool UShinsenFL_Util::GetShowFlag(const FString& InShowName) {
    return false;
}

UShinsenWeatherComponent* UShinsenFL_Util::GetShinsenWeather() {
    return NULL;
}

UShinsenTimeComponent* UShinsenFL_Util::GetShinsenTime() {
    return NULL;
}

UShinsenScriptDecoder* UShinsenFL_Util::GetShinsenScriptDecoder() {
    return NULL;
}

UShinsenMapComponent* UShinsenFL_Util::GetShinsenMap() {
    return NULL;
}

AScheduler* UShinsenFL_Util::GetScheduler() {
    return NULL;
}

UUserWidget* UShinsenFL_Util::GetPauseMenu() {
    return NULL;
}

FString UShinsenFL_Util::GetPauseId_Default() {
    return TEXT("");
}

FString UShinsenFL_Util::GetPauseId_DebugItemMenu() {
    return TEXT("");
}

void UShinsenFL_Util::GetNqItemId(const FString& ItemId, bool& Find, FString& NqItemID) {
}

UShinsenScheduleComponent* UShinsenFL_Util::GetNpcScheduler() {
    return NULL;
}

ELanguage UShinsenFL_Util::GetNextLocalization(ELanguage Current, bool bNext) {
    return ELanguage::ja;
}

UShinsenMdManager* UShinsenFL_Util::GetMdManager() {
    return NULL;
}

FString UShinsenFL_Util::GetMainWorldStartMap() {
    return TEXT("");
}

FString UShinsenFL_Util::GetLocalizationStringFromEnum(ELanguage Lang) {
    return TEXT("");
}

ELanguage UShinsenFL_Util::GetLocalizationEnumFromString(const FString& String) {
    return ELanguage::ja;
}

ELanguage UShinsenFL_Util::GetKeyboardLanguage() {
    return ELanguage::ja;
}

void UShinsenFL_Util::GetHqItemId(const FString& ItemId, bool& Find, FString& HqItemID) {
}

void UShinsenFL_Util::GetGameWork(FShinsenGameWork& OutGameWork) {
}

int32 UShinsenFL_Util::GetFlagVar(const FString& InId, int32 InLength) {
    return 0;
}

bool UShinsenFL_Util::GetFlag(const FString& InId) {
    return false;
}

AShinsenFarm* UShinsenFL_Util::GetFarm() {
    return NULL;
}

AShinsenCharacter* UShinsenFL_Util::GetCurrentPlayer() {
    return NULL;
}

FString UShinsenFL_Util::GetCurrentMapID() {
    return TEXT("");
}

FName UShinsenFL_Util::GetCurrentMap() {
    return NAME_None;
}

int32 UShinsenFL_Util::GetCollisionDefenseId() {
    return 0;
}

int32 UShinsenFL_Util::GetCollisionAttackId() {
    return 0;
}

void UShinsenFL_Util::EnableRendering(bool bEnable) {
}

void UShinsenFL_Util::CreateTitleMenuWidget() {
}

FString UShinsenFL_Util::ConvertPathText(const FString& InText) {
    return TEXT("");
}

void UShinsenFL_Util::ClearAllAchivementFlag() {
}

void UShinsenFL_Util::ClearAllAchievements() {
}

void UShinsenFL_Util::CheckAchievementStory() {
}

void UShinsenFL_Util::CheckAchievementFishing() {
}

void UShinsenFL_Util::CheckAchievementFarm() {
}

void UShinsenFL_Util::CheckAchievementEtc() {
}

void UShinsenFL_Util::CheckAchievementCraft() {
}

void UShinsenFL_Util::CheckAchievementBattle() {
}

void UShinsenFL_Util::CheckAchievementAll() {
}

FString UShinsenFL_Util::CharIDToPartyID(const FString& InCharID) {
    return TEXT("");
}

bool UShinsenFL_Util::CallStore() {
    return false;
}

void UShinsenFL_Util::ApplyKeySettings(const TArray<FKeyConfigration>& KeyConfigration, bool bToggleDecideButton) {
}

void UShinsenFL_Util::ApplyAchievement(int32 AchievementNo) {
}

UShinsenFL_Util::UShinsenFL_Util() {
}

