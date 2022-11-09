#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CalendarTime.h"
#include "EDayOfTheWeek.h"
#include "ShinsenTime_FL.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenTime_FL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UShinsenTime_FL();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSeasonDayText(int32 InGlobalTime, bool bInAddWeek);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCalendarTime GetNowDisplayCalendarTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCalendarTime GetNowCalendarTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetGlobalTimeFromCalendarTime(FCalendarTime Calendar, int32& GlobalTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDisplayCalendarTimeFromGlobalTime(int32 GlobalTime, FCalendarTime& CalendarTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetDayText(EDayOfTheWeek DayOfWeek);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDayFromGlobalTime(int32 InGlobalTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetDateText(int32 Date);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCalendarTimeFromGlobalTime(int32 GlobalTime, FCalendarTime& CalendarTime);
    
};

