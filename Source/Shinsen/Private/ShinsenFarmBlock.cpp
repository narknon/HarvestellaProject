#include "ShinsenFarmBlock.h"

void AShinsenFarmBlock::SpawnSprinkler(FTransform Transform, const FString& UniqueId) {
}

void AShinsenFarmBlock::SpawnProcessingMachine(FTransform Transform, const FString& UniqueId, const FString& ItemId) {
}

void AShinsenFarmBlock::SpawnObstacleRock(FTransform Transform, const FString& UniqueId, const FString& ItemId) {
}

void AShinsenFarmBlock::SpawnFence(FTransform Transform, const FString& UniqueId, FIntPoint GridIndex) {
}

FString AShinsenFarmBlock::GetSeedItemIDFromFarmID(const FString& FarmID) {
    return TEXT("");
}

FIntPoint AShinsenFarmBlock::GetLinkedGridTopIndex(const FString& LinkID) {
    return FIntPoint{};
}

void AShinsenFarmBlock::GetGridCoordinateDir(float Dir, float& LocalDir) {
}

int32 AShinsenFarmBlock::GetFarmLevelFromFlag() {
    return 0;
}

int32 AShinsenFarmBlock::GetExpandLevelFromFlag() {
    return 0;
}

void AShinsenFarmBlock::CopyLinkedBlockGrowthWork(FCropGrowthData Data) {
}

bool AShinsenFarmBlock::CanHaveReturnedFacilityItem(const FString& MachineID, TArray<FItem>& Items) {
    return false;
}

AShinsenFarmBlock::AShinsenFarmBlock() {
    this->Kind = EFarmKind::Max;
    this->FarmLevel = 1;
    this->ExpandLevel = 1;
    this->Level = 0;
}

