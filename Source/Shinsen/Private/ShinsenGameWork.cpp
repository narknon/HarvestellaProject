#include "ShinsenGameWork.h"

FShinsenGameWork::FShinsenGameWork() {
    this->bInitialized = false;
    this->bContinue = false;
    this->BackpackLevel = 0;
    this->ItemsMax = 0;
    this->ShipResult = 0;
    this->Money = 0;
    this->GlobalTime = 0;
    this->FarmExpandLevel = 0;
    this->FieldItemSelectPageIndex = 0;
    this->FieldItemSelectCursorIndex = 0;
    this->PlayerJobType = ECharacterJobType::B00;
    this->bNoDecreaseHp = false;
    this->bNoDecreaseStamina = false;
    this->LowerLimitHp = 0;
    this->LowerLimitStamina = 0;
    this->bIsTimeElapseEnabled = false;
    this->FriendshipAddCount = 0;
    this->FishCountInDay = 0;
    this->TotalShippingMoney = 0;
}

