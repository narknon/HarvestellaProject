#pragma once
#include "CoreMinimal.h"
#include "ShinsenDataAsset_CharacterSwapVoiceInfos.h"
#include "Engine/DataAsset.h"
#include "ECharacterBattleVoice.h"
#include "ShinsenDataAsset_CharacterSwapVoiceInfo.h"
#include "ECharacterFieldVoice.h"
#include "ShinsenDataAsset_CharacterVoiceInfo.h"
#include "ShinsenDataAsset_CharacterVoices.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenDataAsset_CharacterVoices : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterBattleVoice, FShinsenDataAsset_CharacterVoiceInfo> BattleVoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterFieldVoice, FShinsenDataAsset_CharacterVoiceInfo> FieldVoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterBattleVoice, FShinsenDataAsset_CharacterSwapVoiceInfos> SwapBattleVoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterFieldVoice, FShinsenDataAsset_CharacterSwapVoiceInfos> SwapFieldVoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisableHomeVoiceFlag;
    
    UShinsenDataAsset_CharacterVoices();
    UFUNCTION(BlueprintCallable)
    void SwapingFieldVoices();
    
    UFUNCTION(BlueprintCallable)
    void SwapingFieldVoice(const ECharacterFieldVoice Type);
    
    UFUNCTION(BlueprintCallable)
    void SwapingBattleVoices();
    
    UFUNCTION(BlueprintCallable)
    void SwapingBattleVoice(const ECharacterBattleVoice Type);
    
    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSwapingVoice(const FShinsenDataAsset_CharacterSwapVoiceInfo& Info) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckHomeVoiceFlag() const;
    
    UFUNCTION(BlueprintCallable)
    void AutoRegistVoices();
    
    UFUNCTION(BlueprintCallable)
    void AddUnregistType();
    
};

