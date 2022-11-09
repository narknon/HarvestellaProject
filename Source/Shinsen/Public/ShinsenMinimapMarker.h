#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShinsenInterface_MiniMap.h"
#include "EMapIconType.h"
#include "MinimapQuestIDs.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenMinimapMarker.generated.h"

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenMinimapMarker : public AActor, public IShinsenInterface_MiniMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapIconType IconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMapIconType> IconTypeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDispSignBoard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DispSignboardHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuestEffectDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuestDispTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestDispTimeLimitStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestDispTimeLimitEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconChangeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IconDispIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> QuestIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMapIconType, FMinimapQuestIDs> IconsQuestID;
    
    AShinsenMinimapMarker();
    UFUNCTION(BlueprintCallable)
    void UpdateQuestIconProgress();
    
    UFUNCTION(BlueprintCallable)
    void SetQuestIdFromTag();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetQuest(FName InQuestID, bool bInEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconType(EMapIconType Type, bool Enable, bool DispSignboard);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEffectVisible(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoQuestCheck(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidQuestDispTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDispTypeNone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoQuestCheck() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetMiniMapIconInfoArray(EMapIconType& outIconType, FTransform& OutTransform, int32& outSubID, TArray<FName>& outQuestIDs);
    
    
    // Fix for true pure virtual functions not being implemented
};

