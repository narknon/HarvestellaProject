#include "CalendarTime.h"

FCalendarTime::FCalendarTime() {
    this->Year = 0;
    this->Season = ESeason::SPRING;
    this->Day = 0;
    this->Hour = 0;
    this->Min = 0;
    this->bAdditionalTime = false;
    this->DayOfTheWeek = EDayOfTheWeek::MON;
}

