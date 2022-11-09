#include "Scheduler.h"

void AScheduler::InitNavigationPoint() {
}

void AScheduler::GetPointsInMap(FName ID, TArray<FName>& Array) {
}

void AScheduler::GetNearestNavigationPointName_Implementation(FName MapName, FVector Pos, FName& PointName, float& Dist, bool& bSuccess) {
}

void AScheduler::GetNaviRootAndDist_Implementation(FName StartPoint, FName EndPoint, TArray<FName>& Root, TArray<float>& Dist) {
}

void AScheduler::GetBehaviorDataFromId_Implementation(FName ID, FScheduleBehaviorRow& Data, FName& KeyForDT) {
}

AScheduler::AScheduler() {
    this->NaviRootPoint = NULL;
    this->TimeTable = NULL;
    this->Behavior = NULL;
    this->m_dtBehaviorData = NULL;
}

