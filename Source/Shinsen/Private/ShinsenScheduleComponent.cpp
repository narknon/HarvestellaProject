#include "ShinsenScheduleComponent.h"

void UShinsenScheduleComponent::LogSchedule(const FString& Log) {
}

bool UShinsenScheduleComponent::IsDebugSchedule() {
    return false;
}

FMdScheduleGroup UShinsenScheduleComponent::GetScheduleGroupFromGroupID(const FString& GroupID, EDayOfTheWeek NowDotW) {
    return FMdScheduleGroup{};
}



UShinsenScheduleComponent::UShinsenScheduleComponent() {
}

