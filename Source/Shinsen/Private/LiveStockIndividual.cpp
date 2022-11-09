#include "LiveStockIndividual.h"

FLiveStockIndividual::FLiveStockIndividual() {
    this->IdNo = 0;
    this->Type = ELiveStockType::Bird;
    this->DefaultNameNo = 0;
    this->Color = 0;
    this->DefaultColor = 0;
    this->Grows = 0;
    this->Size = 0;
    this->LiveDays = 0;
    this->Affection = 0;
    this->PettedCount = 0;
    this->AteFeed = false;
}

