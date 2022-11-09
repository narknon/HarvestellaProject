#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdItem.h"
#include "MdCharParameter.h"
#include "MdBlacksmith.h"
#include "MdMapObj.h"
#include "ShinsenMdManager.generated.h"

class UMdMapCharBustUpMenu;
class UMdMapAreaWarpWorld;
class UMdMapPicking;
class UMdMapAccessoryEffectType;
class UMdMapCharAnimBsAutoDef;
class UMdMapAchievement;
class UMdMapAreaWarp;
class UMdMapCharFriendPassive;
class UMdMapBattleSkill;
class UMdMapCharJob;
class UMdMapBgm;
class UMdMapBlacksmith;
class UMdMapTxtMemo;
class UMdMapCharJobBoardPanel;
class UMdMapBreakTime;
class UMdMapPlayerGenderResource;
class UMdMapCharParameter;
class UMdMapChar;
class UMdMapProcessingMachine;
class UMdMapCharParty;
class UMdMapCharAnimAutoDef;
class UMdMapCharBustUp;
class UMdMapTxtBattleSkillName;
class UMdMapCharJobBoard;
class UMdMapQuest;
class UMdMapCharStatusEffect;
class UMdMapCharStatusEffectType;
class UMdMapDefine;
class UMdMapDelivery;
class UMdMapTxtItemExplanation;
class UMdMapDeliveryReward;
class UMdMapDropTable;
class UMdMapDropAccessory;
class UMdMapRegion;
class UMdMapDropAccessoryEffect;
class UMdMapScheduleGroup;
class UMdMapDropInfo;
class UMdMapRecipeCategory;
class UMdMapEnemyPosition;
class UMdMapEventBg;
class UMdMapEventScript;
class UMdMapFairyOrder;
class UMdMapFairyOrderReward;
class UMdMapFarm;
class UMdMapFarmHarvest;
class UMdMapFarmFacility;
class UMdMapFlags;
class UMdMapItem;
class UMdMapItemCategory;
class UMdMapItemTag;
class UMdMapTxtLetter;
class UMdMapKeyConfigMenu;
class UMdMapKeyConfigParam;
class UMdMapRecipe;
class UMdMapLetter;
class UMdMapLiveStockBarn;
class UMdMapRecipeBook;
class UMdMapLiveStockDrop;
class UMdMapLiveStockIndividual;
class UMdMapMap;
class UMdMapMapCrop;
class UMdMapMapGimmickRepair;
class UMdMapMapScript;
class UMdMapSysFlags;
class UMdMapMemo;
class UMdMapMiniMap;
class UMdMapQuestStep;
class UMdMapRandomDungeon;
class UMdMapScheduleTimeTable;
class UMdMapShop;
class UMdMapStory;
class UMdMapStoryStep;
class UMdMapTutorial;
class UMdMapTutorialBook;
class UMdMapTreasureBox;
class UMdMapTxtAccessoryEffectType;
class UMdMapTxtAccessoryName;
class UMdMapTxtAreaWarpPointName;
class UMdMapTxtBattleSkillExplanation;
class UMdMapTxtCharJob;
class UMdMapTxtCharJobBoardPanelExplanation;
class UMdMapTxtCharJobBoardPanelName;
class UMdMapTxtCharName;
class UMdMapTxtCharStatusEffectType;
class UMdMapTxtFairyOrder;
class UMdMapTxtItemName;
class UMdMapTxtItemCategory;
class UMdMapTxtItemFlavor;
class UMdMapTxtLiveStockName;
class UMdMapTxtMapName;
class UMdMapTxtQuestGuide;
class UMdMapTxtQuestTitle;
class UMdMapTxtQuestSynopsis;
class UMdMapTxtRecipeCategory;
class UMdMapTxtRecipeName;
class UMdMapTxtRegionName;
class UMdMapTxtReplaceSteam;
class UMdMapTxtStoryGuide;
class UMdMapTxtStoryTitle;
class UMdMapTxtStorySynopsis;
class UMdMapTxtSystem;
class UMdMapTxtSystemSteam;
class UMdMapTxtTutorial;
class UMdMapTxtTutorialBook;
class UMdMapMapObj;

UCLASS(Blueprintable)
class SHINSENMD_API UShinsenMdManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapAccessoryEffectType* MdMapAccessoryEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapAchievement* MdMapAchievement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapAreaWarp* MdMapAreaWarp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapAreaWarpWorld* MdMapAreaWarpWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapBattleSkill* MdMapBattleSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapBgm* MdMapBgm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapBlacksmith* MdMapBlacksmith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapBreakTime* MdMapBreakTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapChar* MdMapChar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapCharAnimAutoDef* MdMapCharAnimAutoDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapCharAnimBsAutoDef* MdMapCharAnimBsAutoDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapCharBustUp* MdMapCharBustUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapCharBustUpMenu* MdMapCharBustUpMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapCharFriendPassive* MdMapCharFriendPassive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapCharJob* MdMapCharJob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapCharJobBoard* MdMapCharJobBoard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapCharJobBoardPanel* MdMapCharJobBoardPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapCharParameter* MdMapCharParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapCharParty* MdMapCharParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapCharStatusEffect* MdMapCharStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapCharStatusEffectType* MdMapCharStatusEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapDefine* MdMapDefine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapDelivery* MdMapDelivery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapDeliveryReward* MdMapDeliveryReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapDropTable* MdMapDropTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapDropAccessory* MdMapDropAccessory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapDropAccessoryEffect* MdMapDropAccessoryEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapDropInfo* MdMapDropInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapEnemyPosition* MdMapEnemyPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapEventBg* MdMapEventBg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapEventScript* MdMapEventScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapFairyOrder* MdMapFairyOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapFairyOrderReward* MdMapFairyOrderReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapFarm* MdMapFarm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapFarmHarvest* MdMapFarmHarvest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapFarmFacility* MdMapFarmFacility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapFlags* MdMapFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapItem* MdMapItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapItemCategory* MdMapItemCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapItemTag* MdMapItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapKeyConfigMenu* MdMapKeyConfigMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapKeyConfigParam* MdMapKeyConfigParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapLetter* MdMapLetter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapLiveStockBarn* MdMapLiveStockBarn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapLiveStockDrop* MdMapLiveStockDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapLiveStockIndividual* MdMapLiveStockIndividual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapMap* MdMapMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapMapCrop* MdMapMapCrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapMapGimmickRepair* MdMapMapGimmickRepair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapMapScript* MdMapMapScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapMemo* MdMapMemo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapMiniMap* MdMapMiniMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapPicking* MdMapPicking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapPlayerGenderResource* MdMapPlayerGenderResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapProcessingMachine* MdMapProcessingMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapQuest* MdMapQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapQuestStep* MdMapQuestStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapRandomDungeon* MdMapRandomDungeon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapRecipe* MdMapRecipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapRecipeBook* MdMapRecipeBook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapRecipeCategory* MdMapRecipeCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapRegion* MdMapRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapScheduleGroup* MdMapScheduleGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapScheduleTimeTable* MdMapScheduleTimeTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapShop* MdMapShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapStory* MdMapStory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapStoryStep* MdMapStoryStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapSysFlags* MdMapSysFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTutorial* MdMapTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTutorialBook* MdMapTutorialBook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTreasureBox* MdMapTreasureBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtAccessoryEffectType* MdMapTxtAccessoryEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtAccessoryName* MdMapTxtAccessoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtAreaWarpPointName* MdMapTxtAreaWarpPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtBattleSkillName* MdMapTxtBattleSkillName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtBattleSkillExplanation* MdMapTxtBattleSkillExplanation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtCharJob* MdMapTxtCharJob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtCharJobBoardPanelExplanation* MdMapTxtCharJobBoardPanelExplanation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtCharJobBoardPanelName* MdMapTxtCharJobBoardPanelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtCharName* MdMapTxtCharName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtCharStatusEffectType* MdMapTxtCharStatusEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtFairyOrder* MdMapTxtFairyOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtItemName* MdMapTxtItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtItemCategory* MdMapTxtItemCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtItemExplanation* MdMapTxtItemExplanation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtItemFlavor* MdMapTxtItemFlavor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtLetter* MdMapTxtLetter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtLiveStockName* MdMapTxtLiveStockName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtMapName* MdMapTxtMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtMemo* MdMapTxtMemo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtQuestGuide* MdMapTxtQuestGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtQuestTitle* MdMapTxtQuestTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtQuestSynopsis* MdMapTxtQuestSynopsis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtRecipeCategory* MdMapTxtRecipeCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtRecipeName* MdMapTxtRecipeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtRegionName* MdMapTxtRegionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtReplaceSteam* MdMapTxtReplaceSteam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtStoryGuide* MdMapTxtStoryGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtStoryTitle* MdMapTxtStoryTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtStorySynopsis* MdMapTxtStorySynopsis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtSystem* MdMapTxtSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtSystemSteam* MdMapTxtSystemSteam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtTutorial* MdMapTxtTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapTxtTutorialBook* MdMapTxtTutorialBook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMdMapMapObj* MdMapMapObjCity;
    
    UShinsenMdManager();
    UFUNCTION(BlueprintCallable)
    void RemoveMapObj(const FString& InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdItem RefMdItem(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtTutorialBook(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtTutorial(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtSystemSteam(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtSystem(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtStoryTitle(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtStorySynopsis(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtStoryGuide(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtReRecipeName(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtReplaceSteam(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtRegionName(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtQuestTitle(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtQuestSynopsis(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtQuestGuide(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtMemo(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtMapName(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtLiveStockName(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtLetter(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtItemName(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtItemFlavor(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtItemExplanation(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtItemCategory(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtFairyOrder(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtCharStatusEffectType(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtCharName(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtCharJobBoardPanelName(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtCharJobBoardPanelExplanation(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtCharJob(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtBattleSkillName(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtBattleSkillExplanation(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtAccessoryName(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistTxtAccessoryEffectType(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable)
    void InitScheduleTimeTable();
    
    UFUNCTION(BlueprintCallable)
    void InitMapObj(const FString& InFn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtTutorialBook(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtTutorial(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtSystemSteam(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtSystem(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtStoryTitle(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtStorySynopsis(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtStoryGuide(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtReplaceSteam(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtRegionName(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtRecipeName(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtQuestTitle(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtQuestSynopsis(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtQuestGuide(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtMemo(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtMapName(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtLiveStockName(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtLetter(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtItemName(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtItemFlavor(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtItemExplanation(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtItemCategory(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtFairyOrder(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtCharStatusEffectType(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtCharName(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtCharJobBoardPanelName(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtCharJobBoardPanelExplanation(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtCharJob(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtBattleSkillName(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtBattleSkillExplanation(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtAreaWarpPointName(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtAccessoryName(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTxtAccessoryEffectType(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdCharParameter getMdCharParameter(const FString& InCharID, int32 InLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdBlacksmith getMdBlacksmith(const FString& InCharID, int32 InLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetItemSelectInfo(const FString& InItemID, FString& OutText, int32& OutAddStomach) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetDebugEditItemIds(const FString& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetDebugEditItemCategories() const;
    
    UFUNCTION(BlueprintCallable)
    bool AddMapObj(const FMdMapObj& InData);
    
};

