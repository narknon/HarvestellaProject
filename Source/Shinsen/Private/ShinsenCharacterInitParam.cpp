#include "ShinsenCharacterInitParam.h"

FShinsenCharacterInitParam::FShinsenCharacterInitParam() {
    this->CharacterSpawnType = ECharacterSpawnType::Npc;
    this->CharacterMode = ECharacterMode::Field;
    this->bFriend = false;
    this->bPlayMontageSpawn = false;
    this->Direction = 0.00f;
    this->SpawnGroundOffsetStart = 0.00f;
    this->SpawnGroundOffsetEnd = 0.00f;
}

