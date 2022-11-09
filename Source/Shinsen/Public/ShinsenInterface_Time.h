#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CalendarTime.h"
#include "ESeason.h"
#include "ShinsenInterface_Time.generated.h"

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_Time : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_Time : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SkipTime(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SkipNextDay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTimeElapsePause(bool bPause, const FString& PauseId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTimeElapseMultiplier(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTimeElapseEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCurrentGlobalTime(int32 GlobalTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCurrentCalendarTime(FCalendarTime CalendarTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IsTimeElapseEnabled(bool& bEnable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDeathSeasonFromCalendar(FCalendarTime CalendarTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IsDeathSeason(bool& bReturn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetTimeElapseMultiplier(float& Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ESeason GetCurrentSeason() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetCurrentGlobalTime(int32& GlobalTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetCurrentCalendarTime(FCalendarTime& CalendarTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearTimeElapsePause();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddYear(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddSeason(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddMinute(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddHour(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddDay(int32 Value);
    
};

