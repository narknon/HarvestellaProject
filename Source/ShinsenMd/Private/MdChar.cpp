#include "MdChar.h"

FMdChar::FMdChar() {
    this->bCanPlayerControl = false;
    this->bSave = false;
    this->WeaponVisible = false;
    this->AlphaType = 0;
    this->bPictureBook = false;
    this->PictureBookType = 0;
    this->SortID = 0;
    this->WalkSpeed = 0.00f;
    this->RunSpeed = 0.00f;
    this->LookTime = 0.00f;
    this->BsChangeTime = 0.00f;
    this->TurnSpeed = 0.00f;
    this->ResistZan = 0;
    this->ResistGeki = 0;
    this->ResistSai = 0;
    this->ResistHa = 0;
    this->ResistHi = 0;
    this->ResistFuu = 0;
    this->ResistSui = 0;
    this->ResistChi = 0;
    this->ResistHyou = 0;
    this->ResistRai = 0;
    this->ResistTetsu = 0;
    this->ResistDoku = 0;
    this->EffectResistDotPoison = 0;
    this->EffectResistDotPhysics = 0;
    this->EffectResistDotMagic = 0;
    this->EffectResistStun = 0;
    this->EffectResistSlow = 0;
    this->EffectResistBind = 0;
    this->EffectResistCharm = 0;
    this->EffectResistFear = 0;
    this->QuestResultScale = 0.00f;
    this->QuestResultPivotX = 0.00f;
    this->QuestResultPivotY = 0.00f;
}

