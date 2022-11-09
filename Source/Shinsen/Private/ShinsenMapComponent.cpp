#include "ShinsenMapComponent.h"

class UObject;
class UWorld;
class ULevelStreamingDynamic;
class AShinsenRoutePoint;
class AShinsenCharacter;

void UShinsenMapComponent::UnLoadLevelInstance(UObject* WorldContextObject, ULevelStreamingDynamic* StreamingLevel, bool& bOutSuccess) {
}

void UShinsenMapComponent::StopSetMapParameterToAsync() {
}

void UShinsenMapComponent::SpawnPickingActor() {
}

void UShinsenMapComponent::SetupFriends(const TArray<FString>& vInId, bool InIsCheckMapGroup) {
}

void UShinsenMapComponent::SetMapParameterToAsync(const FShinsenMapParameterStruct& Parameter, float FadingTime) {
}

void UShinsenMapComponent::SetMapParameter(const FShinsenMapParameterStruct& Parameter) {
}

void UShinsenMapComponent::SetMapChange(FName NextMapID, FName NextPointID) {
}

void UShinsenMapComponent::SetEnableFriendResurrectionTimer(bool bFlag) {
}

void UShinsenMapComponent::ResurrectionFriendAll() {
}

bool UShinsenMapComponent::ResurrectionFriend(const FString& InCharID) {
    return false;
}

void UShinsenMapComponent::RespawnPickingActor() {
}

void UShinsenMapComponent::RespawnFriend(bool bInApplyFriendPassive) {
}

void UShinsenMapComponent::Reset() {
}

bool UShinsenMapComponent::RemoveParty(const FString& InId) {
    return false;
}

void UShinsenMapComponent::IsTextureStreamLoading(UObject* WorldContextObject, bool& bLoading) {
}

bool UShinsenMapComponent::IsPendingMapChange() {
    return false;
}

bool UShinsenMapComponent::isFriendResurrectionWaiting(const FString& InCharID) const {
    return false;
}

bool UShinsenMapComponent::IsContainLoadLevels(UWorld* InLevelWorld) const {
    return false;
}

bool UShinsenMapComponent::IsBattleFriend() const {
    return false;
}

AShinsenRoutePoint* UShinsenMapComponent::getRoutePoint(const FString& InId) const {
    return NULL;
}

FString UShinsenMapComponent::GetPrevMapID() const {
    return TEXT("");
}

void UShinsenMapComponent::GetMapParameter(FShinsenMapParameterStruct& Parameter) {
}

void UShinsenMapComponent::GetMapNameById(const FString& ID, FName& Name) {
}

UWorld* UShinsenMapComponent::GetLoadPersistantLevelWorld() {
    return NULL;
}

void UShinsenMapComponent::GetLevelChildNames(UObject* WorldContextObject, const ULevelStreamingDynamic* LevelStream, bool& bSuccess, TArray<FString>& names) {
}

AShinsenCharacter* UShinsenMapComponent::GetEnemyFromID(const FString& ID) {
    return NULL;
}

bool UShinsenMapComponent::GetEnableFriendResurrectionTimer() const {
    return false;
}

ULevelStreamingDynamic* UShinsenMapComponent::GetCurrentStreamingLevel() {
    return NULL;
}

void UShinsenMapComponent::GetCurrentMapName(FName& Name) {
}

void UShinsenMapComponent::GetCurrentMapID(FString& ID) {
}

AShinsenCharacter* UShinsenMapComponent::GenerateEnemyFromIDAndLocation(const FString& ID, FTransform Transform) {
    return NULL;
}

AShinsenCharacter* UShinsenMapComponent::GenerateEnemyFromID(const FString& ID, bool bInPlayMontageSpawn) {
    return NULL;
}

bool UShinsenMapComponent::ForceDestroyMapObj(AShinsenCharacter* inCharacter) {
    return false;
}

bool UShinsenMapComponent::ForceCreateMapObj(const FString& inUID, FVector inScale3D) {
    return false;
}

void UShinsenMapComponent::DestroyPickingActor() {
}

bool UShinsenMapComponent::DestroyEnemyFromID(const FString& ID) {
    return false;
}

bool UShinsenMapComponent::DeathEnemyFromID(const FString& ID) {
    return false;
}

void UShinsenMapComponent::BreakUpParty() {
}

bool UShinsenMapComponent::AddParty(const FString& InId) {
    return false;
}

UShinsenMapComponent::UShinsenMapComponent() {
    this->MapLimitMinX = 0.00f;
    this->MapLimitMaxX = 0.00f;
    this->MapLimitMinY = 0.00f;
    this->MapLimitMaxY = 0.00f;
    this->FadeTime = 0.50f;
    this->bDisableFadeIn = false;
    this->bDisableFadeOut = false;
    this->Stat = EShinsenMapStat::Init;
    this->LoadingWidget = NULL;
}

