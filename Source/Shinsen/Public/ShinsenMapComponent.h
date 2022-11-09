#pragma once
#include "CoreMinimal.h"
#include "ShinsenMapParameterStruct.h"
#include "Components/ActorComponent.h"
#include "EShinsenMapStat.h"
#include "ShinsenInterface_Map.h"
#include "MapLoadLevel.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenMapComponent.generated.h"

class AShinsenCharacter;
class AShinsenMapPlayerStart;
class UWorld;
class UObject;
class AActor;
class AShinsenRoutePoint;
class UUserWidget;
class UPrimitiveComponent;
class ULevelStreamingDynamic;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHINSEN_API UShinsenMapComponent : public UActorComponent, public IShinsenInterface_Map {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndMapSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBeginMapSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBeginMapAfterFadeSignature);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AShinsenCharacter*> MapObjArray;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AShinsenMapPlayerStart*> PlayerStartArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapLimitMinX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapLimitMaxX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapLimitMinY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapLimitMaxY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenMapStat Stat;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapLoadLevel> LoadLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapLoadLevel> CacheLoadLevels;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeginMapSignature OnBeginMap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndMapSignature OnEndMap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeginMapAfterFadeSignature OnBeginMapAfterFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UObject*, FString> EnemyObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RoutePointActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, AShinsenRoutePoint*> PointIDToRoutePointActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> BattleAreaTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UObject*> LoadedCharacters;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* LoadingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> WaterSurfaceComponents;
    
public:
    UShinsenMapComponent();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnLoadLevelInstance(UObject* WorldContextObject, ULevelStreamingDynamic* StreamingLevel, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable)
    void StopSetMapParameterToAsync();
    
    UFUNCTION(BlueprintCallable)
    void SpawnPickingActor();
    
    UFUNCTION(BlueprintCallable)
    void SetupFriends(const TArray<FString>& vInId, bool InIsCheckMapGroup);
    
    UFUNCTION(BlueprintCallable)
    void SetMapParameterToAsync(const FShinsenMapParameterStruct& Parameter, float FadingTime);
    
    UFUNCTION(BlueprintCallable)
    void SetMapParameter(const FShinsenMapParameterStruct& Parameter);
    
    UFUNCTION(BlueprintCallable)
    void SetMapChange(FName NextMapID, FName NextPointID);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableFriendResurrectionTimer(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void ResurrectionFriendAll();
    
    UFUNCTION(BlueprintCallable)
    bool ResurrectionFriend(const FString& InCharID);
    
    UFUNCTION(BlueprintCallable)
    void RespawnPickingActor();
    
    UFUNCTION(BlueprintCallable)
    void RespawnFriend(bool bInApplyFriendPassive);
    
private:
    UFUNCTION(BlueprintCallable)
    void Reset();
    
public:
    UFUNCTION(BlueprintCallable)
    bool RemoveParty(const FString& InId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void IsTextureStreamLoading(UObject* WorldContextObject, bool& bLoading);
    
    UFUNCTION(BlueprintCallable)
    bool IsPendingMapChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isFriendResurrectionWaiting(const FString& InCharID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsContainLoadLevels(UWorld* InLevelWorld) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleFriend() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AShinsenRoutePoint* getRoutePoint(const FString& InId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPrevMapID() const;
    
    UFUNCTION(BlueprintCallable)
    void GetMapParameter(FShinsenMapParameterStruct& Parameter);
    
    UFUNCTION(BlueprintCallable)
    void GetMapNameById(const FString& ID, FName& Name);
    
    UFUNCTION(BlueprintCallable)
    UWorld* GetLoadPersistantLevelWorld();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetLevelChildNames(UObject* WorldContextObject, const ULevelStreamingDynamic* LevelStream, bool& bSuccess, TArray<FString>& names);
    
    UFUNCTION(BlueprintCallable)
    AShinsenCharacter* GetEnemyFromID(const FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableFriendResurrectionTimer() const;
    
    UFUNCTION(BlueprintCallable)
    ULevelStreamingDynamic* GetCurrentStreamingLevel();
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentMapName(FName& Name);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentMapID(FString& ID);
    
    UFUNCTION(BlueprintCallable)
    AShinsenCharacter* GenerateEnemyFromIDAndLocation(const FString& ID, FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    AShinsenCharacter* GenerateEnemyFromID(const FString& ID, bool bInPlayMontageSpawn);
    
    UFUNCTION(BlueprintCallable)
    bool ForceDestroyMapObj(AShinsenCharacter* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool ForceCreateMapObj(const FString& inUID, FVector inScale3D);
    
    UFUNCTION(BlueprintCallable)
    void DestroyPickingActor();
    
    UFUNCTION(BlueprintCallable)
    bool DestroyEnemyFromID(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    bool DeathEnemyFromID(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    void BreakUpParty();
    
    UFUNCTION(BlueprintCallable)
    bool AddParty(const FString& InId);
    
    
    // Fix for true pure virtual functions not being implemented
};

