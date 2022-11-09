#include "TutorialData.h"

FTutorialData::FTutorialData() {
    this->State = ETutorialState::BEGIN_DELAY;
    this->StartDelay = 0.00f;
    this->Count = 0;
    this->CountTime = 0.00f;
    this->EndDelay = 0.00f;
    this->PreCount = 0;
}

