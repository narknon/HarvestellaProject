#pragma once
#include "CoreMinimal.h"
#include "ShinsenGameWork.h"
#include "LwSysFL_Util.h"
#include "EAppWindowType.h"
#include "EResolution.h"
#include "EForceFeedbackType.h"
#include "ELanguage.h"
#include "EFpsLimit.h"
#include "ECharacterJobType.h"
#include "KeyConfigration.h"
#include "EKeySettings.h"
#include "ShinsenFL_Util.generated.h"

class AShinsenCharacter;
class AScheduler;
class UFont;
class AShinsenFarm;
class UShinsenMapComponent;
class UShinsenWeatherComponent;
class UShinsenMdManager;
class UShinsenTimeComponent;
class UShinsenScriptDecoder;
class UUserWidget;
class UShinsenScheduleComponent;

UCLASS(Blueprintable)
class SHINSEN_API UShinsenFL_Util : public ULwSysFL_Util {
    GENERATED_BODY()
public:
    UShinsenFL_Util();
    UFUNCTION(BlueprintCallable)
    static void UpdateAllKeyImage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString TranslateTagText(const FString& InText);
    
    UFUNCTION(BlueprintCallable)
    static void StopForceFeedback();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> SplitPicTagText(const FString& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> SplitLineText(const FString& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> SplitFriendPassiveText(const FString& InText);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowType(EAppWindowType InType);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowResolution(EResolution Resolution);
    
    UFUNCTION(BlueprintCallable)
    static void SetVsyncEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetTrial(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetSlateGlobalInvalidationEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetShowFlag(const FString& InShowName, bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool SetScheduler(AScheduler* InScheduler);
    
    UFUNCTION(BlueprintCallable)
    static void SetSalesRegionAsia(bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetFpsLimit(EFpsLimit Limit);
    
    UFUNCTION(BlueprintCallable)
    static bool SetFlagVar(const FString& InId, int32 InLength, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    static bool SetFlag(const FString& InId, bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool SetFarm(AShinsenFarm* InFarm);
    
    UFUNCTION(BlueprintCallable)
    static FString ReplaceUnsupportedCharacter(const UFont* Font, const FString& SourceStr, const FString& ReplaceStr);
    
    UFUNCTION(BlueprintCallable)
    static void ReloadMD();
    
    UFUNCTION(BlueprintCallable)
    static void PrintDebugLog(const FString& Log);
    
    UFUNCTION(BlueprintCallable)
    static void PlayMovie(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static void PlayForceFeedback(EForceFeedbackType Type, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString PartyIDToCharID(const FString& InPartyID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString JobTypeToID(ECharacterJobType InJobType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ECharacterJobType JobIDToType(const FString& InJobID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTrial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSalesRegionAsia();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRuckItem(const FString& InItemID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCurrentMapWorldMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBuildShipping();
    
    UFUNCTION(BlueprintCallable)
    static bool IsApplicationForeground();
    
    UFUNCTION(BlueprintCallable)
    static bool IsAllowSameKeySettings(EKeySettings Setting1, EKeySettings Setting2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTxtSystem(const FString& InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTxtItemName(const FString& InId);
    
    UFUNCTION(BlueprintCallable)
    static ELanguage GetSteamLanguage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetShowFlag(const FString& InShowName);
    
    UFUNCTION(BlueprintCallable)
    static UShinsenWeatherComponent* GetShinsenWeather();
    
    UFUNCTION(BlueprintCallable)
    static UShinsenTimeComponent* GetShinsenTime();
    
    UFUNCTION(BlueprintCallable)
    static UShinsenScriptDecoder* GetShinsenScriptDecoder();
    
    UFUNCTION(BlueprintCallable)
    static UShinsenMapComponent* GetShinsenMap();
    
    UFUNCTION(BlueprintCallable)
    static AScheduler* GetScheduler();
    
    UFUNCTION(BlueprintCallable)
    static UUserWidget* GetPauseMenu();
    
    UFUNCTION(BlueprintCallable)
    static FString GetPauseId_Default();
    
    UFUNCTION(BlueprintCallable)
    static FString GetPauseId_DebugItemMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetNqItemId(const FString& ItemId, bool& Find, FString& NqItemID);
    
    UFUNCTION(BlueprintCallable)
    static UShinsenScheduleComponent* GetNpcScheduler();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELanguage GetNextLocalization(ELanguage Current, bool bNext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UShinsenMdManager* GetMdManager();
    
    UFUNCTION(BlueprintCallable)
    static FString GetMainWorldStartMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLocalizationStringFromEnum(ELanguage Lang);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELanguage GetLocalizationEnumFromString(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    static ELanguage GetKeyboardLanguage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetHqItemId(const FString& ItemId, bool& Find, FString& HqItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGameWork(FShinsenGameWork& OutGameWork);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFlagVar(const FString& InId, int32 InLength);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFlag(const FString& InId);
    
    UFUNCTION(BlueprintCallable)
    static AShinsenFarm* GetFarm();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AShinsenCharacter* GetCurrentPlayer();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentMapID();
    
    UFUNCTION(BlueprintCallable)
    static FName GetCurrentMap();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCollisionDefenseId();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCollisionAttackId();
    
    UFUNCTION(BlueprintCallable)
    static void EnableRendering(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void CreateTitleMenuWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ConvertPathText(const FString& InText);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllAchivementFlag();
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllAchievements();
    
    UFUNCTION(BlueprintCallable)
    static void CheckAchievementStory();
    
    UFUNCTION(BlueprintCallable)
    static void CheckAchievementFishing();
    
    UFUNCTION(BlueprintCallable)
    static void CheckAchievementFarm();
    
    UFUNCTION(BlueprintCallable)
    static void CheckAchievementEtc();
    
    UFUNCTION(BlueprintCallable)
    static void CheckAchievementCraft();
    
    UFUNCTION(BlueprintCallable)
    static void CheckAchievementBattle();
    
    UFUNCTION(BlueprintCallable)
    static void CheckAchievementAll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString CharIDToPartyID(const FString& InCharID);
    
    UFUNCTION(BlueprintCallable)
    static bool CallStore();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyKeySettings(const TArray<FKeyConfigration>& KeyConfigration, bool bToggleDecideButton);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyAchievement(int32 AchievementNo);
    
};

