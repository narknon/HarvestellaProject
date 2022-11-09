#pragma once
#include "CoreMinimal.h"
#include "ECharacterFieldVoice.h"
#include "Components/ActorComponent.h"
#include "ECharacterBattleVoice.h"
#include "ShinsenFieldMessageAndSoundData.h"
#include "ShinsenCharacterVoiceComponent.generated.h"

class UShinsenDataAsset_CharacterVoices;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHINSEN_API UShinsenCharacterVoiceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UShinsenDataAsset_CharacterVoices* VoicesAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoiceCharID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPlayHPThresholdVoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, FShinsenFieldMessageAndSoundData> HPThresholdVoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenFieldMessageAndSoundData BossDynamicDeadVoice;
    
    UShinsenCharacterVoiceComponent();
    UFUNCTION(BlueprintCallable)
    void StopHPThresholdVoices();
    
    UFUNCTION(BlueprintCallable)
    void StopFieldVoice(const ECharacterFieldVoice Type, const float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void StopBattleVoice(const ECharacterBattleVoice Type, const float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceCharID(const FString& CharID);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceAsset(UShinsenDataAsset_CharacterVoices* Asset);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviousPlayedHPThreshold(float Value);
    
    UFUNCTION(BlueprintCallable)
    void PlayHPThresholdVoices();
    
    UFUNCTION(BlueprintCallable)
    void PlayFieldVoice(const ECharacterFieldVoice Type);
    
    UFUNCTION(BlueprintCallable)
    void PlayBossDynamicDeadVoice();
    
    UFUNCTION(BlueprintCallable)
    void PlayBattleVoice(const ECharacterBattleVoice Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UShinsenDataAsset_CharacterVoices* GetVoiceAsset();
    
    UFUNCTION(BlueprintCallable)
    void GetHPThresholdCrossedMessageSoundData(const float HpRate, FShinsenFieldMessageAndSoundData& MessageSoundData, float& HpThreshold);
    
};

