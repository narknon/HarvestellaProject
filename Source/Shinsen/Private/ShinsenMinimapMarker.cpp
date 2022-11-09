#include "ShinsenMinimapMarker.h"

void AShinsenMinimapMarker::UpdateQuestIconProgress() {
}

void AShinsenMinimapMarker::SetQuestIdFromTag() {
}

void AShinsenMinimapMarker::SetQuest_Implementation(FName InQuestID, bool bInEnable) {
}



void AShinsenMinimapMarker::SetAutoQuestCheck(bool Enable) {
}

bool AShinsenMinimapMarker::IsValidQuestDispTime() const {
    return false;
}

bool AShinsenMinimapMarker::IsDispTypeNone() const {
    return false;
}

bool AShinsenMinimapMarker::IsAutoQuestCheck() const {
    return false;
}


AShinsenMinimapMarker::AShinsenMinimapMarker() {
    this->IconType = EMapIconType::NoIcon;
    this->bDispSignBoard = false;
    this->DispSignboardHeight = 1;
    this->bQuestEffectDisable = false;
    this->bQuestDispTimeLimit = false;
    this->QuestDispTimeLimitStart = 6;
    this->QuestDispTimeLimitEnd = 2;
    this->bAutoCheck = false;
    this->IconChangeInterval = 1.00f;
    this->IconDispIndex = 0;
    this->SubID = -1;
}

