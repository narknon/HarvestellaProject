#include "JobSaveWork.h"

FJobSaveWork::FJobSaveWork() {
    this->bEnabled = false;
    this->JobPoint = 0;
    this->bSkillU = false;
    this->bSkillL = false;
    this->bSkillB = false;
    this->bSkillR = false;
    this->EnhancementParameterNumAttack = 0;
    this->EnhancementParameterNumSkillU = 0;
    this->EnhancementParameterNumSkillL = 0;
    this->EnhancementParameterNumSkillB = 0;
    this->EnhancementParameterNumSkillR = 0;
    this->EnhancementComboNumAttack = 0;
    this->bDodge = false;
}

