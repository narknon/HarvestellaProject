#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScheduleBehaviorRow.h"
#include "ShinsenInterface_Schedule.h"
#include "UObject/NoExportTypes.h"
#include "Scheduler.generated.h"

class UDataAssetScheduleBehavior;
class UDataAssetNaviRootPoint;
class UDataAssetScheduleTimeTable;
class UDataTable;

UCLASS(Blueprintable)
class SHINSEN_API AScheduler : public AActor, public IShinsenInterface_Schedule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAssetNaviRootPoint* NaviRootPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAssetScheduleTimeTable* TimeTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAssetScheduleBehavior* Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_dtBehaviorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> PointNameToIndex;
    
    AScheduler();
    UFUNCTION(BlueprintCallable)
    void InitNavigationPoint();
    
    UFUNCTION(BlueprintCallable)
    void GetPointsInMap(FName ID, TArray<FName>& Array);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetNearestNavigationPointName(FName MapName, FVector Pos, FName& PointName, float& Dist, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetNaviRootAndDist(FName StartPoint, FName EndPoint, TArray<FName>& Root, TArray<float>& Dist);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetBehaviorDataFromId(FName ID, FScheduleBehaviorRow& Data, FName& KeyForDT);
    
    
    // Fix for true pure virtual functions not being implemented
};

