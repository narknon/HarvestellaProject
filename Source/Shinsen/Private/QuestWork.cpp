#include "QuestWork.h"

FQuestWork::FQuestWork() {
    this->IDType = EQuestIDType::None;
    this->StepPhase = EQuestStepPhase::None;
    this->DelayDays = 0;
    this->Step = 0;
    this->SubStepBit = 0;
    this->SubStepCompleteBit = 0;
    this->GuideTime = 0;
    this->bPriority = false;
    this->bCharaWaitStep = false;
}

