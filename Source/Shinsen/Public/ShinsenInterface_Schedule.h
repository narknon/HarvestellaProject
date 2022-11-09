#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "ScheduleBehaviorRow.h"
#include "ShinsenInterface_Schedule.generated.h"

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_Schedule : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_Schedule : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetPatrolPointFromIndex(const FString& TimeTableID, int32 PatrolPointIndex, FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetNextPatrolPoint(const FString& TimeTableID, int32 PatrolPointIndex, int32& NextPointID, FVector& NextPointLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetNearestNavigationPointName(FName MapName, FVector Pos, FName& PointName, float& Dist, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetNaviRootAndDist(FName StartPoint, FName EndPoint, TArray<FName>& Root, TArray<float>& Dist);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetBehaviorDataFromId(FName ID, FScheduleBehaviorRow& Data, FName& KeyForDT);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishNpcSchedule(const FString& CharID, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecuteNpcSchedule(const FString& CharID, const FString& ScheduleID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndMapFunc();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugSwitchNpcListDisp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugSwitchNavPointDisp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginMapFunc();
    
};

