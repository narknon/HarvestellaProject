#include "ShinsenFL_MinimapMarker.h"

class UObject;

void UShinsenFL_MinimapMarker::SetMarkerAndTag(const FString& ID, bool bEnable, EMapIconType Type, FName Tag, const UObject* WorldContextObject) {
}

void UShinsenFL_MinimapMarker::SetMarker(const FString& ID, bool bEnable, EMapIconType Type, const UObject* WorldContextObject) {
}

TArray<FName> UShinsenFL_MinimapMarker::GetMarkerAssignedQuestIDs(const FString& ID, const UObject* WorldContextObject) {
    return TArray<FName>();
}

UShinsenFL_MinimapMarker::UShinsenFL_MinimapMarker() {
}

