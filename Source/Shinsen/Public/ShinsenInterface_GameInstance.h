#pragma once
#include "CoreMinimal.h"
#include "ECharacterJobType.h"
#include "EPickingType.h"
#include "ERecipeStatus.h"
#include "UObject/Interface.h"
#include "ELanguage.h"
#include "LiveStockIndividual.h"
#include "EShopUICategory.h"
#include "PlayerIndividuality.h"
#include "MdProcessingMachine.h"
#include "Accessory.h"
#include "EShinsenGameMode.h"
#include "ELiveStockType.h"
#include "FieldItemSelectPage.h"
#include "EQuestStepPhase.h"
#include "EQuestIDType.h"
#include "UObject/NoExportTypes.h"
#include "Item.h"
#include "ShopItem.h"
#include "RecipeWork.h"
#include "MdEnemyPosition.h"
#include "QuestWork.h"
#include "EPlayerVoiceType.h"
#include "EPictureBookEnemyInfoLevelStep.h"
#include "AchievementItemCount.h"
#include "EPictureBookCategory.h"
#include "MdItem.h"
#include "AchievementFarmItemCount.h"
#include "EFarmAction.h"
#include "AchievementCraftCount.h"
#include "EAccessoryUICategory.h"
#include "UObject/NoExportTypes.h"
#include "MdPicking.h"
#include "ShinsenInterface_GameInstance.generated.h"

class UObject;
class UShinsenSaveGame;
class UShinsenMdManager;

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_GameInstance : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_GameInstance : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta=(WorldContext="InWorldContextObject"))
    void UseItem(const UObject* InWorldContextObject, const int32 InSlotIndex, bool bInFieldItemSelect, bool bEffect, bool& bOutUse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta=(WorldContext="InWorldContextObject"))
    void UseBreakTimeItem(const UObject* InWorldContextObject, const int32 InSlotIndex, bool& bOutUse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateLiveStockInfo(FLiveStockIndividual Info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateAccessory(const FString& ID, FAccessory Accessory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwapBackpackItemOrder(int32 Index1, int32 Index2);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowLoadingScreen(bool bPlayUntilStopped, float PlayTime, bool bCallPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWeaponLevel(const FString& CharID, int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupPet(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SettleShipItems();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTitleType(int32 Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStatusBuffInvisible(float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSelectedImportantItem(const FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSaveAreaWarpID(FName AreaWarpID, bool bSetMapIDFromMD);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRebootToCharaCreate(bool bFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetQuestSubStepComplete(FName StepID, bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetQuestStep(FName ID, int32 Step);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetQuestPriority(const FString& QuestID, bool InFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetQuestMemoComplete(const FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPrevGameMode(EShinsenGameMode InGameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerName(const FText& PlayerName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerJobEnabled(ECharacterJobType InJobType, bool bInEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerJobBoardPanelOpened(ECharacterJobType InJobType, const FString& InCharJobBoardPanelID, bool bInOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerIndividuality(FPlayerIndividuality Individuality);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPetName(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextMapID(FName InId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNewGame(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLetterRead(FName ID, bool IsRead, bool& IsExit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLetterGetItem(FName ID, bool IsGetItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLatestSaveSlotIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLastInputKeyboard(bool bIsKeyboard);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFirstBoot(bool bFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFieldQuestGuidePopupEnd(const FString& QuestID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFieldPickingDispMiniMapIcon(const FString& PickingID, bool bDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFairyOrderFlag(const FString& ID, bool bFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCurrentCulture(ELanguage Culure);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCurrentAudioCulture(ELanguage Culure);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCharName(const FString& InId, const FString& InName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCharacterSelectable(const FString& CharID, bool bSelectable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCharacterFriendship(const FString& InCharID, int32 InFriendship);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCharacterFixedFriend(const FString& CharID, bool bFixedFriend);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBuyItem(const FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBreakTimeUseItem(const FString& ID, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBreakTimeFlag(const FString& ID, bool bFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBreakGaugeDisp(const FString& EnemyPositionID, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetAchievementFishRecord(const FString& ItemId, int32 Size);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 SetAchievementFarmPetKeepMax(ELiveStockType Type, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetAchievementCount(const FString& AchievementID, int32 Count, bool bCompare);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Save();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RestorePlacedItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RestockShopStock();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetFieldPickingDropNumAll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetFieldPickingDropNum(FName PickingID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveQuest(FName ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void QuestStepIDToParam(FName StepID, FName& ID, int32& Step, int32& SubStep, EQuestStepPhase& Phase) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName QuestStepIDToID(FName StepID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EQuestIDType QuestIDToType(FName ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FString> QuestIDToStepIDList(FName ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName QuestIDToStepID(FName ID, int32 Step, int32 SubStep) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaceItemSlotIndex(int32 Index, FVector Location, float RandomRange);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaceItem(const FString& ItemId, int32 Num, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OrganizeBackpack(int32 SortType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NextQuestStep(FName ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoveStorageBoxItemToBackpack(FName ItemId, int32 Num, int32& MoveNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool MoveShippingBoxItemToBackpack(FName ItemId, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool MoveShipItemsToItems(FName InId, int32 InNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool MoveItemsToShipItems(FName InId, int32 InNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool MoveItemsToBoxItems(FName InId, int32 InNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool MoveBoxItemsToItems(FName InId, int32 InNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoveBackpackItemToStorageBox(int32 BackpackSlotIndex, int32 Num, int32& MoveNum, int32& OverflowNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool MoveBackpackItemToShippingBox(int32 BackpackSlotIndex, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 MdDateToGlobalTime(int32 Date) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MakeRecipe(FName RecipeID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Load();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool LeaveLiveStock(int32 IdNo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsRebootToCharaCreate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsQuestSubStepComplete(FName StepID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsQuestSubStepAllComplete(FName StepID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsQuestStepThrough(FName StepID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsQuestStepComplete(FName StepID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsQuestPriority(const FString& QuestID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPossibleAddItemsArray(const TArray<FItem>& ItemArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPossibleAddItems(FName InId, int32 InNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPlayerJobEnabled(ECharacterJobType InJobType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPlayerJobBoardPanelOpened(ECharacterJobType InJobType, const FString& InCharJobBoardPanelID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPlayerJobBoardOpened(ECharacterJobType InJobType, int32 InJobRank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPlayerGenderM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPlayerGenderF() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsNewGame();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLetterRead(FName ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLetterGetItem(FName ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLetterExistItem(FName ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLetterDisp(FName ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLastInputKeyboard();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsItemSpaceFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsHaveStorageBoxItem(FName InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsHaveProcessingMachineMaterial(const FString& InItemID, TArray<FMdProcessingMachine>& OutMdArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsHaveItems(FName InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFirstBoot();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFieldPickingDispMiniMapIcon(const FString& PickingID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFadeMaskBusy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFadeMaskActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsExistUnreadLetter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsExistLiveStockProduce(ELiveStockType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDisableSleep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDebugNewGame();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharaQuestWaitStep(const FString& QuestID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharacterSelectable(const FString& CharID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharacterFixedFriend(const FString& CharID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBreakGaugeDisp(const FString& EnemyPositionID, int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta=(WorldContext="InWorldContextObject"))
    void IsAvailableItem(const UObject* InWorldContextObject, const FString& InId, bool bInFieldItemSelect, bool& bOutUse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitGameWorkForTest(EShinsenGameMode InPrevGameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitGameWorkForNewGame(EShinsenGameMode InPrevGameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideLoadingScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HaveAccessory(const FString& ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetWeaponLevel(const FString& CharID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetUnreadLetterNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetTotalFriendship() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetTitleType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetStorageBoxItemNum(FName InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FShopItem> GetShopItemArray(FName ShopID, EShopUICategory UICategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetShipResult();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetSelectedImportantItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FString> GetSelectablePartyIDArray(bool bFixedFriend) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetSeasonDateText(int32 GlobalTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UShinsenSaveGame* GetSaveGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetRecipeWork(FName RecipeID, bool& IsExist, FRecipeWork& RecipeWork) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ERecipeStatus GetRecipeStatus(FName RecipeID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FString> GetRecipeIDArray(FName CategoryID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetRecipeCompleteDays(FName CategoryID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetRecipeBook(FName ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetQuestWork(FName ID, FQuestWork& QuestWork, bool& IsExist) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetQuestTitle(FName ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FString> GetQuestTargetMarkers(EQuestIDType IDType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetQuestSynopsis(FName StepID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EQuestStepPhase GetQuestStepPhase(FName ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetQuestStepID(FName ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetQuestStepCompleteRate(FName StepID, int32& CompleteNum, int32& Num) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetQuestStep(FName ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetQuestPriorityID(FString& QuestID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EQuestIDType GetQuestIDType(FName ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FString> GetQuestIDList(EQuestIDType IDType, EQuestStepPhase StepPhase) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetQuestGuide(FName StepID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EShinsenGameMode GetPrevGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EPlayerVoiceType GetPlayerVoiceType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetPlayerSkillJobBoardPanelID(ECharacterJobType InJobType, int32 InSkillType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPlayerJobRank(ECharacterJobType InJobType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPlayerJobPoint(ECharacterJobType InJobType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FString> GetPlayerJobIDArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPlayerJobBoardPanelOpenedTotalNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPlayerJobBoardPanelOpenedNum(ECharacterJobType InJobType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FPlayerIndividuality GetPlayerIndividuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetPlayerFirstPerson();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EPictureBookEnemyInfoLevelStep GetPictureBookEnemyInfoLevel(const FString& InCharID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<bool> GetPictureBookEnemyHitAttr(const FString& InCharID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPictureBookEnemyCount(const FString& InCharID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPictureBookCompleteIngredients(bool bIgnoreQuolity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPictureBookCompleteCount(EPictureBookCategory InPictureBookCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FString> GetPictureBookCategoryIds(EPictureBookCategory InPictureBookCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetPetName(FString& Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPetLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UShinsenMdManager* GetMdManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetMaxAddItemsNum(FName InId, int32 InMaxNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetLiveStockProduce(ELiveStockType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetLiveStockNumMax(ELiveStockType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetLiveStockNum(ELiveStockType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetLiveStockInfo(int32 IdNo, bool& bFind, FLiveStockIndividual& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetLiveStockFriendlyItem(ELiveStockType Type, TMap<FName, int32>& Items);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FString> GetLetterIDArray(bool bNew) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetLetterGlobalTime(FName ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetLatestSaveSlotIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetItemSpaceNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetItemsNum(FName InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FMdItem> GetImportantItemArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetHomeItemsNum(FName ItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetHaveItemSpaceNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetFieldQuestGuidePriorityID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetFieldQuestGuidePopupID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetFieldPickingDropNum(FName PickingID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetFieldItemSelectPageNum();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetFieldItemSelectPageIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FFieldItemSelectPage GetFieldItemSelectPage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetFieldItemSelectCursorIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetFieldItemSelectCurrentItemNum();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetFieldItemSelectCurrentItemIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetFieldItemSelectCurrentItemId();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetFairyOrderFlag(const FString& ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetFairyOrderDivisionLevel(int32 Division) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetFairyOrderClearedNum(int32 Division) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetEquippedAccessoryID(const FString& CharID, int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetDebugVersionString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCurrentGlobalTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ELanguage GetCurrentCulture();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ELanguage GetCurrentAudioCulture();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetClearedSubQuestNum(const FString& RegionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetCharName(const FString& InId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetCharJobBoardPanelPathIcon(const FString& InCharJobBoardPanelID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCharJobBoardPanelNeedsJobPoint(const FString& InCharJobBoardPanelID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCharJobBoardPanelIconType(const FString& InCharJobBoardPanelID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCharacterFriendshipMaxChar(TArray<FString>& OutArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCharacterFriendship(const FString& InCharID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetBuyItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetBreakTimeUseItem(FString& ID, int32& SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetBreakTimeFlag(const FString& ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetBarnLevel(ELiveStockType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetBarnFeed(ELiveStockType Type, int32& Now, int32& Max) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FItem GetBackpackItemFromIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAchievementMoneyUseShop(const FString& ShopID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAchievementMoneyUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAchievementMoneyGet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FAchievementItemCount GetAchievementItemCount(const FString& ItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAchievementFishRecord(const FString& ItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAchievementFarmTotalHarvestNum();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAchievementFarmTotalCountSow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAchievementFarmTotalCountHarvest();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAchievementFarmTotalCountGrow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAchievementFarmProductCount(ELiveStockType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAchievementFarmPettedCount(ELiveStockType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAchievementFarmPetKeepMax(ELiveStockType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAchievementFarmGetPetCount(ELiveStockType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FAchievementFarmItemCount GetAchievementFarmCount(const FString& ItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetAchievementFarmActionCount(EFarmAction Action, int32& NormalNum, int32& ChargeNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FAchievementCraftCount GetAchievementCraftCount(const FString& ItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAchievementCount(const FString& AchievementID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FString> GetAccessoryUICategoryIds(const FString& SelectID, const FString& OtherID, EAccessoryUICategory Category, bool bReverseOrder) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetAccessoryIds(TArray<FString>& IDs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FAccessory GetAccessory(const FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FadeMaskOut(FLinearColor Color, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FadeMaskIn(FLinearColor Color, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EquipAccessory(const FString& CharID, int32 Index, const FString& AccessoryID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndDayLiveStock();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DropGroupToItem(FName GroupID, FString& ItemId, int32& ItemNum, int32& RareFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DeleteItemSlotIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DeleteItems(FName InId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeleteAccessory(const FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 DecSlotItems(int32 SlotIndex, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DebugQuickSaveGame();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearQuestPriorityAll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearLiveStockFriendlyItem(ELiveStockType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckRecipeDate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckQuestStepID(FName StepID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckQuestStepFinishQuestStepComplete(const FString& StepID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckQuestStepFinishLetterRead(FName LetterID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckQuestStepFinishEnemyDead(const FMdEnemyPosition& EnemyPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckQuestDate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckQuestCurrentStepID(FName StepID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckQuestAdd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckPeriodShopStock();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckLetterDate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckLetterAdd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckGameWork();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckFieldPickingDate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName CheckCompleteRecipe(FName CategoryID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanPlayerJobBoardPanelOpen(ECharacterJobType InJobType, const FString& InCharJobBoardPanelID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CalcFieldPickingDropParam(const FMdPicking& MdPicking, int32 DropLevel, FString& DropGroupID, int32& DropNumMax) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 CalcFieldPickingDropLevel(EPickingType PickingType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddStorageBoxItem(FName ItemId, int32 Num, int32& ResultNum, int32& OverflowNum, bool bAddAchivementCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddShopStock(FName InId, int32 InNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddRecipe(FName RecipeID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddQuestMemo(const FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddQuest(FName ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddPetLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddLoadingScreenToViewport();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddLiveStock(ELiveStockType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddLetter(FName ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddItemsForce(const FString& ItemId, int32 Num, bool bAddAchivementCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddItemsArrayForce(const TArray<FItem>& ItemArray, TArray<FItem>& Backpack, TArray<FItem>& Storage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddItemsArray(const TArray<FItem>& ItemArray, bool bAddAchivementCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddItems(FName InId, int32 InNum, bool bAddAchivementCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddHomeItems(FName ItemId, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddFieldPickingDropNum(FName PickingID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddCharacterFriendship(const FString& InCharID, int32 InFriendship);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddBarnFeed(ELiveStockType Type, int32 Add);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddAchievementMoneyUseShop(const FString& ShopID, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddAchievementMoneyUse(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddAchievementMoneyGet(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddAchievementItemCountUse(const FString& ItemId, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddAchievementItemCountShip(const FString& ItemId, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddAchievementItemCountGet(const FString& ItemId, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddAchievementItemCountBuy(const FString& ItemId, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddAchievementFarmProductCount(ELiveStockType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddAchievementFarmPettedCount(ELiveStockType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddAchievementFarmGetPetCount(ELiveStockType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddAchievementFarmCountSow(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddAchievementFarmCountHarvest(const FString& ItemId, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddAchievementFarmCountGrow(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddAchievementFarmActionCount(EFarmAction Action, bool bIsCharge, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddAchievementCraftCount(const FString& ItemId, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddAchievementCount(const FString& AchievementID, int32 AddCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddAccessory(FAccessory Accessory, FString& ID);
    
};

