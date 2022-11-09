#include "ShinsenFL_Farm.h"

class UObject;

void UShinsenFL_Farm::SetActionLevelFromFlag() {
}

bool UShinsenFL_Farm::IsWitherSeason(const FString& FarmID) {
    return false;
}

bool UShinsenFL_Farm::IsPlacingItem(const FString& ItemId) {
    return false;
}

void UShinsenFL_Farm::InitObstacleRocks() {
}

void UShinsenFL_Farm::InitFarm(const UObject* WorldContextObject) {
}

int32 UShinsenFL_Farm::GetPlacingItemGridSize(const FString& ItemId) {
    return 0;
}

void UShinsenFL_Farm::GetGrowSeason(const FString& FarmID, bool& bGrow, int32& GrowRate) {
}

void UShinsenFL_Farm::GetGrowCrops(const FString& FarmID, int32 Level, FString& ItemId, int32& Num) {
}

EFarmFacilityType UShinsenFL_Farm::GetFarmFacilityType(const FString& ItemId) {
    return EFarmFacilityType::None;
}

int32 UShinsenFL_Farm::GetExpandLevelFromFlag() {
    return 0;
}

void UShinsenFL_Farm::EnableWatarFallSound() {
}

void UShinsenFL_Farm::DebugSetLevel(EFarmKind Kind, int32 Level) {
}

void UShinsenFL_Farm::DebugSetExpandLevel(int32 Level) {
}

void UShinsenFL_Farm::DebugSetActionStaminaLevel(EFarmActionStaminaLevel Action, int32 Level) {
}

void UShinsenFL_Farm::DebugSetActionLevel(EFarmAction Action, int32 Level) {
}

bool UShinsenFL_Farm::CanSowSeason(const FString& ItemId) {
    return false;
}

bool UShinsenFL_Farm::CanPlant(const FString& ItemId, EFarmKind Kind) {
    return false;
}

UShinsenFL_Farm::UShinsenFL_Farm() {
}

