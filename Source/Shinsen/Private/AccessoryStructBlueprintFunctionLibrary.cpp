#include "AccessoryStructBlueprintFunctionLibrary.h"

TMap<FString, int32> UAccessoryStructBlueprintFunctionLibrary::SortEffectSlotsNameDesc(const FAccessory& InAccessory) {
    return TMap<FString, int32>();
}

bool UAccessoryStructBlueprintFunctionLibrary::IsValid(FAccessory& Accessory) {
    return false;
}

void UAccessoryStructBlueprintFunctionLibrary::GetEffectAccessory(const FString& InEffectID, FAccessory& OutAccessory) {
}

void UAccessoryStructBlueprintFunctionLibrary::GetAccessoryUICategoryEffectParam(const FAccessory& InAccessory, EAccessoryUICategory InCategory, bool& OutHasCategory, int32& OutParam) {
}

void UAccessoryStructBlueprintFunctionLibrary::GetAccessoryUICategoryEffectGrade(const FAccessory& InAccessory, EAccessoryUICategory InCategory, bool& OutHasCategory, int32& OutParam) {
}

void UAccessoryStructBlueprintFunctionLibrary::GetAccessoryTypeEffectParam(const FAccessory& InAccessory, EAccessoryEffectType InType, bool& OutHasType, int32& OutParam) {
}

EAccessoryEffectType UAccessoryStructBlueprintFunctionLibrary::GetAccessoryType(const FString& TypeId) {
    return EAccessoryEffectType::None;
}

int32 UAccessoryStructBlueprintFunctionLibrary::GetAccessoryNum() {
    return 0;
}

void UAccessoryStructBlueprintFunctionLibrary::GetAccessoryName(FString& Name, FAccessory Accessory) {
}

int32 UAccessoryStructBlueprintFunctionLibrary::GetAccessoryMax() {
    return 0;
}

int32 UAccessoryStructBlueprintFunctionLibrary::GetAccessoryEmptySlotNum(const FAccessory& InAccessory) {
    return 0;
}

int32 UAccessoryStructBlueprintFunctionLibrary::GetAccessoryEffectGrade(const EAccessoryEffectType& InType, const int32& InParam) {
    return 0;
}

UAccessoryStructBlueprintFunctionLibrary::UAccessoryStructBlueprintFunctionLibrary() {
}

