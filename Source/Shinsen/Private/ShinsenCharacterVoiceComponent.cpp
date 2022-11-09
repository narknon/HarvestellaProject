#include "ShinsenCharacterVoiceComponent.h"

class UShinsenDataAsset_CharacterVoices;

void UShinsenCharacterVoiceComponent::StopHPThresholdVoices() {
}

void UShinsenCharacterVoiceComponent::StopFieldVoice(const ECharacterFieldVoice Type, const float FadeTime) {
}

void UShinsenCharacterVoiceComponent::StopBattleVoice(const ECharacterBattleVoice Type, const float FadeTime) {
}

void UShinsenCharacterVoiceComponent::SetVoiceCharID(const FString& CharID) {
}

void UShinsenCharacterVoiceComponent::SetVoiceAsset(UShinsenDataAsset_CharacterVoices* Asset) {
}

void UShinsenCharacterVoiceComponent::SetPreviousPlayedHPThreshold(float Value) {
}

void UShinsenCharacterVoiceComponent::PlayHPThresholdVoices() {
}

void UShinsenCharacterVoiceComponent::PlayFieldVoice(const ECharacterFieldVoice Type) {
}

void UShinsenCharacterVoiceComponent::PlayBossDynamicDeadVoice() {
}

void UShinsenCharacterVoiceComponent::PlayBattleVoice(const ECharacterBattleVoice Type) {
}

UShinsenDataAsset_CharacterVoices* UShinsenCharacterVoiceComponent::GetVoiceAsset() {
    return NULL;
}

void UShinsenCharacterVoiceComponent::GetHPThresholdCrossedMessageSoundData(const float HpRate, FShinsenFieldMessageAndSoundData& MessageSoundData, float& HpThreshold) {
}

UShinsenCharacterVoiceComponent::UShinsenCharacterVoiceComponent() {
    this->VoicesAsset = NULL;
    this->bCanPlayHPThresholdVoices = false;
}

