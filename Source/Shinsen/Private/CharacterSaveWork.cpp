#include "CharacterSaveWork.h"

FCharacterSaveWork::FCharacterSaveWork() {
    this->ExpNow = 0;
    this->ExpYesterday = 0;
    this->Level = 0;
    this->Friendship = 0;
    this->WeaponLevel = 0;
    this->bSelectable = false;
    this->bFixedFriend = false;
    this->bParameterSaved = false;
    this->ParameterHp = 0;
    this->ParameterStamina = 0;
    this->FriendResurrectionTime = 0.00f;
}

