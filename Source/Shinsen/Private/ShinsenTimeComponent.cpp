#include "ShinsenTimeComponent.h"

void UShinsenTimeComponent::UpdateTime(bool bReset) {
}

void UShinsenTimeComponent::Update_Implementation(float DeltaTime) {
}

void UShinsenTimeComponent::InitTimeFromGameWork() {
}

void UShinsenTimeComponent::Init(int32 inYear, ESeason inSeason, int32 inDate, float InTime) {
}

FCalendarTime UShinsenTimeComponent::GetPrevCalenderOnTimeChanged() {
    return FCalendarTime{};
}

void UShinsenTimeComponent::GetGlobalTimeFromCalendarTime(FCalendarTime Calendar, int32& GlobalTime) {
}

void UShinsenTimeComponent::GetCalendarTimeFromGlobalTime(int32 GlobalTime, FCalendarTime& CalendarTime) {
}

UShinsenTimeComponent::UShinsenTimeComponent() {
}

