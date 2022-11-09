#pragma once
#include "CoreMinimal.h"
#include "Ruby.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SetN.h"
#include "MdCharAnimAutoDef.h"
#include "LanInfo.h"
#include "Bustup.h"
#include "Mes.h"
#include "ScriptMessage.h"
#include "EScriptCommand.h"
#include "FlagEventArray.h"
#include "Result.h"
#include "PathAndLabel.h"
#include "TimeEvent.h"
#include "ScriptDecoderDelegate.h"
#include "UObject/NoExportTypes.h"
#include "EMessageMode.h"
#include "Kismet/KismetMathLibrary.h"
#include "EMapChangeBgm.h"
#include "ShinsenScriptDecoder.generated.h"

class UObject;
class AShinsenCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHINSEN_API UShinsenScriptDecoder : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<uint8> DataU8;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> DataMesU8;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> GosubStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> mpVarInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, bool> mpVarBool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> mpVarFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FString> mpVarString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSetN> vSetN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tag_LastReplaceStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBustup> vBustup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetCharaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuby> vRuby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuby> vRubyDic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMes> vSelectText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScriptMessage> vScrMesWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveBgmID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JumpEventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdCharAnimAutoDef> mpCharAnimAutoDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FFlagEventArray> mpFlagEvent;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, int64> mpSeHandle;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, int64> mpVoiceHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> mpSEADVolumeSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> mpSeAutoStopTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> mpSeAutoStopFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FResult> mpVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerDeathEventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FTimeEvent> mpTimeEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> vGuideMarkerQuestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> vLoadObject;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLanInfo> vLanInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> vLabelStrMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FString> mpMessageIdxToId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> mpMessageIdToOfs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPathAndLabel> StartWaitingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPathAndLabel RunningEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptDecoder OnEventScriptDecoder;
    
    UShinsenScriptDecoder();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TimeMinuteChanged();
    
    UFUNCTION(BlueprintCallable)
    static void SetTrackCameraWait(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetSkipAll(bool InIsRapid);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectId(int32 ID, bool isSetup);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectEnd();
    
    UFUNCTION(BlueprintCallable)
    void SetOk();
    
    UFUNCTION(BlueprintCallable)
    static void SetMessageSize(FVector2D Size, int32 Index, EMessageMode Mode);
    
    UFUNCTION(BlueprintCallable)
    static void SetLoadWait(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetLevelSequenceWait(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetLevelSequenceEnd();
    
    UFUNCTION(BlueprintCallable)
    static void SetForceWait(bool Flag, EScriptCommand Command);
    
    UFUNCTION(BlueprintCallable)
    static void SetFadeWait(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetDefaultFontColor(FLinearColor in_color);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharTurnWait(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharSpawnWait(bool in_flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharMoveWait(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharLookWait(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharDestroyCancel(bool in_flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharAnimWait(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetChangeBSWait(bool in_flag);
    
    UFUNCTION(BlueprintCallable)
    void SetCancel();
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraShakeWait(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetBgMaskFadeWait(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetBgFadeWait(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllClearEnd();
    
    UFUNCTION(BlueprintCallable)
    static void ResetMapChangeBgm();
    
    UFUNCTION(BlueprintCallable)
    static int64 PlaySe(const FString& in_path);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUpdateText();
    
    UFUNCTION(BlueprintCallable)
    static bool IsTimeElapseEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool IsThereWaitingEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSkipRapid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSkipAll();
    
    UFUNCTION(BlueprintCallable)
    bool IsRunning();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPageEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharSpawnWait();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharDestroyCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsChangeBSWait();
    
    UFUNCTION(BlueprintCallable)
    void InitWork();
    
    UFUNCTION(BlueprintCallable)
    void InitMapChangeAfterFade();
    
    UFUNCTION(BlueprintCallable)
    void InitMapChange();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTrackCameraEaseSteps(int32& Steps);
    
    UFUNCTION(BlueprintCallable)
    static float GetTrackCameraEaseInOutExp(float Alpha, float& InExp, float& OutExp);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<EEasingFunc::Type> GetTrackCameraEaseFuncType();
    
    UFUNCTION(BlueprintCallable)
    FString GetTargetCharID();
    
    UFUNCTION(BlueprintCallable)
    static void GetSelectMessageArray(TArray<FScriptMessage>& MessageArray);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSelectId();
    
    UFUNCTION(BlueprintCallable)
    static void GetQuestionMessageArray(TArray<FScriptMessage>& MessageArray);
    
    UFUNCTION(BlueprintCallable)
    static void GetMessageArray(TArray<FScriptMessage>& MessageArray, EMessageMode Mode);
    
    UFUNCTION(BlueprintCallable)
    static EMapChangeBgm GetMapChangeBgmType();
    
    UFUNCTION(BlueprintCallable)
    static FString GetMapChangeBgmSelectID();
    
    UFUNCTION(BlueprintCallable)
    static bool GetGamePaused();
    
    UFUNCTION(BlueprintCallable)
    AShinsenCharacter* GetChar(FString& in_id);
    
    UFUNCTION(BlueprintCallable)
    void EndMapChange();
    
    UFUNCTION(BlueprintCallable)
    static void ClearWaitingEvent();
    
    UFUNCTION(BlueprintCallable)
    static bool CallEventScriptPath(FName in_path, FName in_label);
    
    UFUNCTION(BlueprintCallable)
    static bool CallEventScriptId(FName in_id);
    
};

