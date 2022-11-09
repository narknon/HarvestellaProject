#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ELanguage.h"
#include "SQEXSeadHandleBP.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "ShinsenSound.generated.h"

class USQEXSEADEventController;
class USQEXSEADSoundBank;
class UDataTable;
class USQEXSEADEventExecuter;
class USceneComponent;

UCLASS(Blueprintable)
class SHINSEN_API UShinsenSound : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BgmID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BgmPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundBank* SoundBankBgm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundBank* SoundBankBgmFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELanguage VoiceLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoiceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EventLabelTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADEventController* EventController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USQEXSEADEventExecuter*> EventExecuter;
    
    UShinsenSound();
protected:
    UFUNCTION(BlueprintCallable)
    static bool StopByDelegate(UObject* InObject, FSQEXSeadHandleBP Handle, float FadeOutTime, FTimerDynamicDelegate OnFinished, FTimerHandle& TimerHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    static void StopBgm_BP(float FadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    void StopBgm(float InFadeOutTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    static bool Stop(FSQEXSeadHandleBP InHandle, float InFadeOutTime);
    
public:
    UFUNCTION(BlueprintCallable)
    static void SetVoiceType(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetVoiceLanguage(ELanguage Language);
    
    UFUNCTION(BlueprintCallable)
    static bool SetSeadVolumeEnable(const FName& Tag, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool SeadLayoutSoundEnable(const FName& Tag, bool bEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    static FSQEXSeadHandleBP PlayVoiceAttached(USceneComponent* InComponent, FName InAttachSocketName, USQEXSEADSoundBank* InSoundBank);
    
    UFUNCTION(BlueprintCallable)
    static FSQEXSeadHandleBP PlayVoice3D(UObject* InObject, FVector InLocation, USQEXSEADSoundBank* InSoundBank);
    
    UFUNCTION(BlueprintCallable)
    static FSQEXSeadHandleBP PlayVoice2D(UObject* InObject, USQEXSEADSoundBank* InSoundBank);
    
    UFUNCTION(BlueprintCallable)
    static FSQEXSeadHandleBP PlaySeAttached(USceneComponent* InComponent, FName InAttachSocketName, USQEXSEADSoundBank* InSoundBank);
    
    UFUNCTION(BlueprintCallable)
    static FSQEXSeadHandleBP PlaySe3D(UObject* InObject, FVector InLocation, USQEXSEADSoundBank* InSoundBank);
    
    UFUNCTION(BlueprintCallable)
    static FSQEXSeadHandleBP PlaySe2D(UObject* InObject, USQEXSEADSoundBank* InSoundBank);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayBgm(const FString& InBgmID, float InFadeTime, float InStartSeekTime);
    
    UFUNCTION(BlueprintCallable)
    void PauseBgm(bool bInPause, float InFadeOutTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    static bool Pause(FSQEXSeadHandleBP InHandle, bool bInPause, float InFadeTime);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValid(FSQEXSeadHandleBP InHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlaying(FSQEXSeadHandleBP InHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPausing(FSQEXSeadHandleBP InHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool isLoop(USQEXSEADSoundBank* InSoundBank, FName SoundName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetOptionVolumeMovie();
    
    UFUNCTION(BlueprintCallable)
    static float GetDuration(USQEXSEADSoundBank* InSoundBank, FName SoundName);
    
    UFUNCTION(BlueprintCallable)
    static bool CallSeadEvent(const FName& Label, bool bBegin);
    
};

