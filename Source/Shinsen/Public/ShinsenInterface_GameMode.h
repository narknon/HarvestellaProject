#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ECharacterBattleVoice.h"
#include "ShinsenFieldMessageAndSoundData.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenMapParameterStruct.h"
#include "ECharacterSkillNotAvaliableReason.h"
#include "ECharacterVoiceSpeaker.h"
#include "ECharacterFieldVoice.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenInterface_GameMode.generated.h"

class UUserWidget;
class USceneComponent;
class AShinsenCharacter;
class UShinsenDataAsset_CharacterVoicesSettings;

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_GameMode : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_GameMode : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateWidgetFieldItemSelectCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateWidgetFieldItemSelectAll(bool bInUse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateWidgetFieldButtonItemSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateWidgetField3dGauge(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateFieldQuestGuidePriority();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateFieldQuestGuidePopup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateBattle(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnlockControlWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TryLockControlWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopWidgetFieldGaugeTalkMessageWithVoice(float Fade);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldVisibility(bool InVisibility, bool InIsExcludeClock);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldGaugeTalkMessageWithVoice(const FShinsenFieldMessageAndSoundData& InData, USceneComponent* InAttachComponent, FName InAttachSocketName, float& TotalDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldGaugeTalkMessage(const FString& InName, const FString& InText, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldGaugeSystemWindow(const FString& InText, const FLinearColor& InTextColor, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldGaugeSkillName(const FString& InSkillName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldGaugeMessage(const FString& InText, bool bInBgBlack, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldForWorldMap(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldClockMessage(const FString& InText, bool bInBgBlack, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldButtonSkillAlert(ECharacterSkillNotAvaliableReason InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldButtonFarmShift();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldButtonFarm();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldButtonDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldButtonButtonShift();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWidgetFieldButtonBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPrevFoughtEnemyUIDs(const TArray<FString>& UIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMapParameter(const FShinsenMapParameterStruct& Parameter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetForceTeleportFriends(bool bFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFieldQuestGuideTutorial(bool bBusy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCharacterEnemyMainTarget(AShinsenCharacter* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCharacterEnemyLockOnTarget(AShinsenCharacter* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBreakTimeAfterVoice();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActionCommandInvisible(bool bFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SendFieldActionResultMessage(const FText& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SendFieldActionItemResult(FName InItemID, int32 InItemNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SendFieldActionAccessoryResult(FName InAccessoryID, int32 InItemNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveCharacterFriendAll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveCharacterFriend(AShinsenCharacter* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveCharacter(AShinsenCharacter* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PlayCharacterFieldVoice(AShinsenCharacter* Owner, ECharacterVoiceSpeaker SpeakerType, ECharacterFieldVoice VoiceType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PlayCharacterBattleVoice(AShinsenCharacter* Owner, ECharacterVoiceSpeaker SpeakerType, ECharacterBattleVoice VoiceType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void JumpCharacterFriendToPlayerAround();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsWidgetFieldItemSelectOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPlayerInside(FVector InLocation, float InDist);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsMapBattleArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharacterExistAll(const FVector& InLocation, float InRadius) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideWidgetFieldTalkMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideWidgetFieldSystemWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideWidgetFieldGaugeMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideWidgetFieldClockMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UUserWidget* GetWidgetFieldQuestGuide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UUserWidget* GetWidgetFieldMiniMap();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UUserWidget* GetWidgetFieldGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UUserWidget* GetWidgetFieldClock();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UUserWidget* GetWidgetFieldButton();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UUserWidget* GetWidgetFieldAreaName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UUserWidget* GetWidgetFieldActionInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FString> GetPrevFoughtEnemyUIDs();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AShinsenCharacter*> GetPlayerParty();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPlayerCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AShinsenCharacter* GetPlayer(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetMapParameter(FShinsenMapParameterStruct& Parameter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AShinsenCharacter* GetFieldActionPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AShinsenCharacter*> GetEnemySameGroup(AShinsenCharacter* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AShinsenCharacter*> GetEnemyPartyFromBattleAreaID(const FString& InBattleAreaID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AShinsenCharacter*> GetEnemyParty(AShinsenCharacter* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AShinsenCharacter*> GetEnemyFromGroup(const FString& EnemyGroupID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AShinsenCharacter* GetCurrentPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UShinsenDataAsset_CharacterVoicesSettings* GetCharacterVoiceSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AShinsenCharacter* GetCharacterFriendFromCharID(const FString& InCharID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCharacterFriendCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AShinsenCharacter* GetCharacterFriend(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AShinsenCharacter* GetCharacterEnemyMainTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AShinsenCharacter* GetCharacterEnemyLockOnTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AShinsenCharacter* GetCharacterEnemyFromID(const FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCharacterEnemyCountByTag(FName Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCharacterEnemyCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AShinsenCharacter* GetCharacterEnemyBreakGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AShinsenCharacter*> GetCharacterEnemyArrayByTarget(AShinsenCharacter* inCharacter, float InRange);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AShinsenCharacter*> GetCharacterEnemyArrayByRange(AShinsenCharacter* inCharacter, float InRange);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AShinsenCharacter* GetCharacterEnemy(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AShinsenCharacter*> GetAllCharacters();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetActionCommandInvisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndDay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayFieldQuestGuide(bool bInDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayFieldAreaName(const FString& InStr1, const FString& InStr2, bool InIsSmall);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DispFieldActionResultMessageBackpackFull();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateWidgetField();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseWidgetFieldItemSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearPlayerRoutePoints();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearFieldAreaName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearCharacterEnemyMainTargetForce();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearCharacterEnemyMainTarget(AShinsenCharacter* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearCharacterEnemyLockOnTargetForce();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearCharacterEnemyLockOnTarget(AShinsenCharacter* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearCharacterEnemyBreakGauge(AShinsenCharacter* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddCharacterFriend(AShinsenCharacter* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddCharacter(AShinsenCharacter* inCharacter);
    
};

