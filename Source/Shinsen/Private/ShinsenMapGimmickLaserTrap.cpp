#include "ShinsenMapGimmickLaserTrap.h"

class USceneComponent;

void AShinsenMapGimmickLaserTrap::UpdateChildLayoutSound(FVector BaseLocation, FVector PointOffset) {
}

void AShinsenMapGimmickLaserTrap::StopLaserSound() {
}



void AShinsenMapGimmickLaserTrap::SetChildLayoutSoundVolume(float Volume) {
}

void AShinsenMapGimmickLaserTrap::PlayLaserSound(float LaserLength, USceneComponent* AttatchTo) {
}

bool AShinsenMapGimmickLaserTrap::IsMonitoringEnemy() {
    return false;
}


void AShinsenMapGimmickLaserTrap::AddActiveEnemyGroup(const FString& NewEnemyGroup) {
}

void AShinsenMapGimmickLaserTrap::ActiveEnemyGroup() {
}

AShinsenMapGimmickLaserTrap::AShinsenMapGimmickLaserTrap() {
    this->MoveTime = 5.00f;
    this->MoveInterval = 0.00f;
    this->bHitted = false;
    this->bPaused = false;
    this->ChildSound = NULL;
    this->LaserSoundBank = NULL;
    this->LaserSoundAudibleRangeScale = 2.00f;
}

