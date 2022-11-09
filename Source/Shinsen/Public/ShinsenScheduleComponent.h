#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ShinsenInterface_Schedule.h"
#include "EDayOfTheWeek.h"
#include "MdScheduleGroup.h"
#include "ScheduleMarker.h"
#include "ShinsenScheduleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHINSEN_API UShinsenScheduleComponent : public UActorComponent, public IShinsenInterface_Schedule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FScheduleMarker> ReserveMarker;
    
    UShinsenScheduleComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void LogSchedule(const FString& Log);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugSchedule();
    
public:
    UFUNCTION(BlueprintCallable)
    FMdScheduleGroup GetScheduleGroupFromGroupID(const FString& GroupID, EDayOfTheWeek NowDotW);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishNpcSchedule(const FString& CharID, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecuteNpcSchedule(const FString& CharID, const FString& ScheduleID);
    
    
    // Fix for true pure virtual functions not being implemented
};

