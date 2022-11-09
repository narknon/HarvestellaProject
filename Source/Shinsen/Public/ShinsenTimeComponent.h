#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESeason.h"
#include "ShinsenInterface_Time.h"
#include "CalendarTime.h"
#include "ShinsenTimeComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHINSEN_API UShinsenTimeComponent : public UActorComponent, public IShinsenInterface_Time {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FYearChangedSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSeasonChangedSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMinuteChangedSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHourChangedSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDayChangedSignature);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYearChangedSignature OnYearChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeasonChangedSignature OnSeasonChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDayChangedSignature OnDayChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHourChangedSignature OnHourChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinuteChangedSignature OnMinuteChanged;
    
    UShinsenTimeComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateTime(bool bReset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void InitTimeFromGameWork();
    
    UFUNCTION(BlueprintCallable)
    void Init(int32 inYear, ESeason inSeason, int32 inDate, float InTime);
    
    UFUNCTION(BlueprintCallable)
    FCalendarTime GetPrevCalenderOnTimeChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGlobalTimeFromCalendarTime(FCalendarTime Calendar, int32& GlobalTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCalendarTimeFromGlobalTime(int32 GlobalTime, FCalendarTime& CalendarTime);
    
    
    // Fix for true pure virtual functions not being implemented
};

