#include "LwSysFL_Util.h"

class USkeletalMeshComponent;
class UStaticMeshComponent;
class AActor;
class UPrimitiveComponent;
class UDecalComponent;
class UObject;
class APawn;
class APlayerController;
class AHUD;
class USceneComponent;

void ULwSysFL_Util::startCameraFadeOutFromStartAlpha(float InFadeTime, float InStartAlpha, FLinearColor InColor) {
}

void ULwSysFL_Util::startCameraFadeOut(float InFadeTime, FLinearColor InColor) {
}

void ULwSysFL_Util::startCameraFadeInFromStartAlpha(float InFadeTime, float InStartAlpha) {
}

void ULwSysFL_Util::startCameraFadeIn(float InFadeTime) {
}

void ULwSysFL_Util::SetTimeScale(float TimeScale) {
}

void ULwSysFL_Util::SetStaticMeshLightChannels(UStaticMeshComponent* InStaticMeshComponent, bool InChannel0, bool InChannel1, bool InChannel2) {
}

void ULwSysFL_Util::SetStaticMeshIndirectLightingCacheQuality(UStaticMeshComponent* InStaticMeshComponent, TEnumAsByte<EIndirectLightingCacheQuality> InIndirectLightingCacheQuality) {
}

void ULwSysFL_Util::SetSkeletalMeshLightChannels(USkeletalMeshComponent* InSkeletalMeshComponent, bool InChannel0, bool InChannel1, bool InChannel2) {
}

void ULwSysFL_Util::SetSkeletalMeshIndirectLightingCacheQuality(USkeletalMeshComponent* InSkeletalMeshComponent, TEnumAsByte<EIndirectLightingCacheQuality> InIndirectLightingCacheQuality) {
}

void ULwSysFL_Util::SetSafeFolderPath(AActor* InActor, const FName& NewFolderPath) {
}

void ULwSysFL_Util::SetSafeActorLabel(AActor* InActor, const FString& InNewActorLabel, bool InMarkDirty) {
}

void ULwSysFL_Util::SetRefractionQuality(int32 Level) {
}

void ULwSysFL_Util::SetMeshLightChannels(UPrimitiveComponent* InPrimitiveComponent, bool InChannel0, bool InChannel1, bool InChannel2) {
}

void ULwSysFL_Util::SetMeshIndirectLightingCacheQuality(UPrimitiveComponent* InPrimitiveComponent, TEnumAsByte<EIndirectLightingCacheQuality> InIndirectLightingCacheQuality) {
}

void ULwSysFL_Util::SetDynamicResMinScreenPercentage(int32 Value) {
}

void ULwSysFL_Util::SetDynamicResMaxScreenPercentage(int32 Value) {
}

void ULwSysFL_Util::setDecalSizeFrontAndSide(UDecalComponent* InDecalComponent, const float InFrontSize, const float InSideSize, const float InHeight) {
}

void ULwSysFL_Util::setDecalSize(UDecalComponent* InDecalComponent, const float InSize, const float InHeight) {
}

void ULwSysFL_Util::setCpuBoostModeEnabled(bool bEnable) {
}

void ULwSysFL_Util::RestoreRefractionQuality() {
}

void ULwSysFL_Util::RestoreDynamicResMinScreenPercentage() {
}

void ULwSysFL_Util::RestoreDynamicResMaxScreenPercentage() {
}

void ULwSysFL_Util::ResetTimeScale() {
}

void ULwSysFL_Util::RemoveNotVaild(TArray<UObject*>& inArray) {
}

void ULwSysFL_Util::RefClampMinInt(int32& InOutValue, int32 InMin, int32& OutValue) {
}

void ULwSysFL_Util::RefClampMinFloat(float& InOutValue, float InMin, float& OutValue) {
}

void ULwSysFL_Util::RefClampMaxInt(int32& InOutValue, int32 InMax, int32& OutValue) {
}

void ULwSysFL_Util::RefClampMaxFloat(float& InOutValue, float InMax, float& OutValue) {
}

void ULwSysFL_Util::RefClampInt(int32& InOutValue, int32 InMin, int32 InMax, int32& OutValue) {
}

void ULwSysFL_Util::RefClampFloat(float& InOutValue, float InMin, float InMax, float& OutValue) {
}

void ULwSysFL_Util::IsZero(float InValue, bool& bOutBool) {
}

bool ULwSysFL_Util::IsSwitchPlatform() {
    return false;
}

bool ULwSysFL_Util::IsActual() {
    return false;
}

float ULwSysFL_Util::GetTimeScale() {
    return 0.0f;
}

bool ULwSysFL_Util::getNavigationLocationByPawn(APawn* InObject, const FVector& InLocation, FVector& OutLocation) {
    return false;
}

APlayerController* ULwSysFL_Util::GetMyPlayerController(const UObject* InObject) {
    return NULL;
}

AHUD* ULwSysFL_Util::GetMyHUD(const UObject* InObject) {
    return NULL;
}

USceneComponent* ULwSysFL_Util::findClosestSceneComponent(const TArray<USceneComponent*>& Components, const FVector& InLocation) {
    return NULL;
}

ULwSysFL_Util::ULwSysFL_Util() {
}

