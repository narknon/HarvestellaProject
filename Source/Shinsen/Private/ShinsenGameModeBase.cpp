#include "ShinsenGameModeBase.h"
#include "ShinsenMapComponent.h"
#include "ShinsenTimeComponent.h"
#include "ShinsenScriptDecoder.h"
#include "ShinsenWeatherComponent.h"

void AShinsenGameModeBase::ShinsenTimeAddYear(float inYear) {
}

void AShinsenGameModeBase::ShinsenTimeAddWeek(float Week) {
}

void AShinsenGameModeBase::ShinsenTimeAddSeason(float inSeason) {
}

void AShinsenGameModeBase::ShinsenTimeAddMinute(float Minute) {
}

void AShinsenGameModeBase::ShinsenTimeAddHour(float Hour) {
}

void AShinsenGameModeBase::ShinsenTimeAddDay(float Day) {
}

AShinsenGameModeBase::AShinsenGameModeBase() {
    this->CharacterEnemyMainTarget = NULL;
    this->CharacterEnemyLockOnTarget = NULL;
    this->CharacterEnemyBreakGauge = NULL;
    this->Map = CreateDefaultSubobject<UShinsenMapComponent>(TEXT("Map"));
    this->ScriptDecoder = CreateDefaultSubobject<UShinsenScriptDecoder>(TEXT("ScriptDecoder"));
    this->Weather = CreateDefaultSubobject<UShinsenWeatherComponent>(TEXT("Weather"));
    this->ShinsenTime = CreateDefaultSubobject<UShinsenTimeComponent>(TEXT("Time"));
    this->Farm = NULL;
    this->NpcScheduler = NULL;
    this->Scheduler = NULL;
    this->WidgetPauseMenu = NULL;
    this->WidgetFieldClock = NULL;
    this->WidgetFieldMiniMap = NULL;
    this->WidgetFieldGauge = NULL;
    this->WidgetFieldButton = NULL;
    this->WidgetFieldActionInfo = NULL;
    this->WidgetField3dGauge = NULL;
    this->WidgetFieldItemSelect = NULL;
    this->WidgetFieldBreak = NULL;
    this->WidgetFieldAreaName = NULL;
    this->WidgetFieldQuestGuide = NULL;
    this->WidgetTutorial = NULL;
    this->WidgetTutorialBook = NULL;
    this->WidgetWorldMapGuide = NULL;
}

