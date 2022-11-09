#include "ShinsenWeatherComponent.h"

void UShinsenWeatherComponent::SetWeatherParticleEnable_Implementation(bool inEnable) {
}

void UShinsenWeatherComponent::SetWeatherID(EWeather inWeatherID) {
}

void UShinsenWeatherComponent::SetEnable(bool inEnable) {
}

void UShinsenWeatherComponent::SetEffectEnable(bool inEnable) {
}

bool UShinsenWeatherComponent::IsUseID(EWeather inWeatherID) {
    return false;
}

bool UShinsenWeatherComponent::IsEnable() const {
    return false;
}

bool UShinsenWeatherComponent::IsEffectEnable() const {
    return false;
}

EWeather UShinsenWeatherComponent::GetWeatherID() const {
    return EWeather::Sunny;
}

EWeather UShinsenWeatherComponent::GetPrevWeatherID() const {
    return EWeather::Sunny;
}

float UShinsenWeatherComponent::GetLightIntensity() const {
    return 0.0f;
}

FLinearColor UShinsenWeatherComponent::GetLightColor() const {
    return FLinearColor{};
}

UShinsenWeatherComponent::UShinsenWeatherComponent() {
    this->Particle = NULL;
}

