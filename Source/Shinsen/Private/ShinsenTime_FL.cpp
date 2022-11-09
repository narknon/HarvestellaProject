#include "ShinsenTime_FL.h"

FText UShinsenTime_FL::GetSeasonDayText(int32 InGlobalTime, bool bInAddWeek) {
    return FText::GetEmpty();
}

FCalendarTime UShinsenTime_FL::GetNowDisplayCalendarTime() {
    return FCalendarTime{};
}

FCalendarTime UShinsenTime_FL::GetNowCalendarTime() {
    return FCalendarTime{};
}

void UShinsenTime_FL::GetGlobalTimeFromCalendarTime(FCalendarTime Calendar, int32& GlobalTime) {
}

void UShinsenTime_FL::GetDisplayCalendarTimeFromGlobalTime(int32 GlobalTime, FCalendarTime& CalendarTime) {
}

FText UShinsenTime_FL::GetDayText(EDayOfTheWeek DayOfWeek) {
    return FText::GetEmpty();
}

int32 UShinsenTime_FL::GetDayFromGlobalTime(int32 InGlobalTime) {
    return 0;
}

FText UShinsenTime_FL::GetDateText(int32 Date) {
    return FText::GetEmpty();
}

void UShinsenTime_FL::GetCalendarTimeFromGlobalTime(int32 GlobalTime, FCalendarTime& CalendarTime) {
}

UShinsenTime_FL::UShinsenTime_FL() {
}

