#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ShinsenInterface_GameInstance.h"
#include "ShinsenGameWork.h"
#include "CharacterGreetFlag.h"
#include "ECharacterJobType.h"
#include "ShinsenGameInstance.generated.h"

class UShinsenMdManager;
class UDataAsset;
class UShinsenDataAsset_CharacterFieldAI;
class UShinsenSaveGame;
class UShinsenSound;
class UUserWidget;
class UDataTable;
class UWorld;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class SHINSEN_API UShinsenGameInstance : public UGameInstance, public IShinsenInterface_GameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UShinsenSaveGame* SaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UShinsenMdManager* MdManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShinsenSound* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenGameWork GameWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* CharacterHitAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* CharacterAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UShinsenDataAsset_CharacterFieldAI* CharacterFieldAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* WidgetLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstBoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRebootToCharaCreate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LatestSaveFileIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLastInputKeyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GlobalPlacedItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BreakTimeUseItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BreakTimeUseSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectedImportantItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BuyItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FCharacterGreetFlag> CharacterGreetFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeathSeasonVoiceAnnounced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangedSeasonVoiceAnnounced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHarvestVoiceAnnounced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLetterVoiceAnnounced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DebugSkeletalMeshActorParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DebugPlayerSkeletalMeshParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugVersionString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* DebugLayoutGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugScriptEventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugSaveCulture;
    
    UShinsenGameInstance();
    UFUNCTION(BlueprintCallable)
    void updateCharacterExp();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerJobSlotID(const FString& SlotName, const FString& JobID);
    
    UFUNCTION(BlueprintCallable)
    void setFriendCharId(int32 InIndex, const FString& InCharID);
    
    /*UFUNCTION(meta=(DisplayName = "SQEXInit"), BlueprintNativeEvent)*/
    void ReceiveInit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString JobTypeToID(ECharacterJobType JobType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterJobType JobIDToType(const FString& JobID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerJobSlotID(const FString& SlotName) const;
    
    UFUNCTION(BlueprintCallable)
    int64 GetMoney();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString getFriendCharId(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getCharacterLevelYesterday(const FString& InCharID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getCharacterLevelMax(const FString& InCharID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getCharacterLevelFromExp(const FString& InCharID, int32 InExp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getCharacterLevel(const FString& InCharID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getCharacterExpYesterday(const FString& InCharID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getCharacterExpNow(const FString& InCharID) const;
    
    UFUNCTION(BlueprintCallable)
    void EndLoadingScreen(UWorld* InLoadedWorld);
    
    UFUNCTION(BlueprintCallable)
    void clearFriendCharId(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int64 AddMoney(int64 Add);
    
    UFUNCTION(BlueprintCallable)
    void addCharacterExpNow(const FString& InCharID, int32 InExp);
    
    
    // Fix for true pure virtual functions not being implemented
};

