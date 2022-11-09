#include "ShinsenTimeZoneLight.h"

class AActor;



void AShinsenTimeZoneLight::ResetMeshMaterial() {
}

bool AShinsenTimeZoneLight::IsActorContainSubLevel(AActor* Actor) const {
    return false;
}

float AShinsenTimeZoneLight::GetDirectionalLightIntensity() const {
    return 0.0f;
}

FLinearColor AShinsenTimeZoneLight::GetDirectionalLightColor() const {
    return FLinearColor{};
}


void AShinsenTimeZoneLight::ConvWeatherLightIntensity(float InIntensity, float& OutIntensity) const {
}

void AShinsenTimeZoneLight::ConvWeatherLightColor(const FLinearColor& InColor, FLinearColor& OutColor) const {
}

void AShinsenTimeZoneLight::ConvWeatherLight(float InIntensity, const FLinearColor& InColor, float& OutIntensity, FLinearColor& OutColor) const {
}


AShinsenTimeZoneLight::AShinsenTimeZoneLight() {
    this->bEnable = true;
    this->DayTime = 12.00f;
    this->WeatherID = EWeather::Sunny;
    this->bEnableWeatherLight = false;
    this->WeatherLightModulateIntensity = 1.00f;
    this->WeatherLightOffsetIntensity = 0.00f;
    this->DirectionalLightIntensity = NULL;
    this->DirectionalLightCloudyIntensity = NULL;
    this->DirectionalLightRainyIntensity = NULL;
    this->DirectionalLightColor = NULL;
    this->SkyLightIntensity = NULL;
    this->SkyLightColor = NULL;
    this->SkySphereSunHeight = NULL;
    this->SkySphereSunBrightness = NULL;
    this->SkySphereStarsBrightness = NULL;
    this->SkySphereCloudOpacity = NULL;
    this->SkySphereSunnyHorizonColor = NULL;
    this->SkySphereSunnyZenithColor = NULL;
    this->SkySphereCloudyCloudOpacity = NULL;
    this->SkySphereCloudyHorizonColor = NULL;
    this->SkySphereCloudyZenithColor = NULL;
    this->SkySphereRainyCloudOpacity = NULL;
    this->SkySphereRainyHorizonColor = NULL;
    this->SkySphereRainyZenithColor = NULL;
    this->CharacterGlobalIlluminationModulate_Intensity = NULL;
    this->CharacterGlobalIlluminationModulate_Color = NULL;
    this->CharacterSkyLightModulate_Intensity = NULL;
    this->CharacterSkyLightModulate_Color = NULL;
    this->bOverride_SunnyCharacterGlobalIlluminationOffset_Intensity = false;
    this->SunnyCharacterGlobalIlluminationOffset_Intensity = 0.00f;
    this->bOverride_SunnyCharacterSkyLightOffset_Intensity = false;
    this->SunnyCharacterSkyLightOffset_Intensity = 0.00f;
    this->bOverride_CloudyCharacterGlobalIlluminationOffset_Intensity = false;
    this->CloudyCharacterGlobalIlluminationOffset_Intensity = 0.00f;
    this->bOverride_CloudyCharacterSkyLightOffset_Intensity = false;
    this->CloudyCharacterSkyLightOffset_Intensity = 0.00f;
    this->bOverride_RainyCharacterGlobalIlluminationOffset_Intensity = false;
    this->RainyCharacterGlobalIlluminationOffset_Intensity = 0.00f;
    this->bOverride_RainyCharacterSkyLightOffset_Intensity = false;
    this->RainyCharacterSkyLightOffset_Intensity = 0.00f;
    this->GlobalIllumination_Intensity = NULL;
    this->GlobalIllumination_Color = NULL;
    this->ExponentialHeightFog_FogDensity = NULL;
    this->ExponentialHeightFog_FogHeightFalloff = NULL;
    this->ExponentialHeightFog_FogInscatteringColor = NULL;
    this->ExponentialHeightFog_FogMaxOpacity = NULL;
    this->ExponentialHeightFog_StartDistance = NULL;
    this->ExponentialHeightFog_FogCutoffDistance = NULL;
    this->ExponentialHeightFog_SecondFogDensity = NULL;
    this->ExponentialHeightFog_SecondFogHeightFalloff = NULL;
    this->ExponentialHeightFog_SecondFogHeightOffset = NULL;
    this->ExponentialHeightFog_DirectionalInscatteringColor = NULL;
    this->CloudyExponentialHeightFog_FogDensity = NULL;
    this->CloudyExponentialHeightFog_FogHeightFalloff = NULL;
    this->CloudyExponentialHeightFog_FogInscatteringColor = NULL;
    this->CloudyExponentialHeightFog_FogMaxOpacity = NULL;
    this->CloudyExponentialHeightFog_StartDistance = NULL;
    this->CloudyExponentialHeightFog_FogCutoffDistance = NULL;
    this->CloudyExponentialHeightFog_SecondFogDensity = NULL;
    this->CloudyExponentialHeightFog_SecondFogHeightFalloff = NULL;
    this->CloudyExponentialHeightFog_SecondFogHeightOffset = NULL;
    this->CloudyExponentialHeightFog_DirectionalInscatteringColor = NULL;
    this->RainyExponentialHeightFog_FogDensity = NULL;
    this->RainyExponentialHeightFog_FogHeightFalloff = NULL;
    this->RainyExponentialHeightFog_FogInscatteringColor = NULL;
    this->RainyExponentialHeightFog_FogMaxOpacity = NULL;
    this->RainyExponentialHeightFog_StartDistance = NULL;
    this->RainyExponentialHeightFog_FogCutoffDistance = NULL;
    this->RainyExponentialHeightFog_SecondFogDensity = NULL;
    this->RainyExponentialHeightFog_SecondFogHeightFalloff = NULL;
    this->RainyExponentialHeightFog_SecondFogHeightOffset = NULL;
    this->RainyExponentialHeightFog_DirectionalInscatteringColor = NULL;
    this->DirectionalLight = NULL;
    this->SkyLight = NULL;
    this->PostProcessVolume = NULL;
    this->ExponentialHeightFog = NULL;
}

