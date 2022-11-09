#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Accessory.h"
#include "EAccessoryEffectType.h"
#include "EAccessoryUICategory.h"
#include "AccessoryStructBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UAccessoryStructBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAccessoryStructBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FString, int32> SortEffectSlotsNameDesc(const FAccessory& InAccessory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(UPARAM(Ref) FAccessory& Accessory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetEffectAccessory(const FString& InEffectID, FAccessory& OutAccessory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAccessoryUICategoryEffectParam(const FAccessory& InAccessory, EAccessoryUICategory InCategory, bool& OutHasCategory, int32& OutParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAccessoryUICategoryEffectGrade(const FAccessory& InAccessory, EAccessoryUICategory InCategory, bool& OutHasCategory, int32& OutParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAccessoryTypeEffectParam(const FAccessory& InAccessory, EAccessoryEffectType InType, bool& OutHasType, int32& OutParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EAccessoryEffectType GetAccessoryType(const FString& TypeId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAccessoryNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAccessoryName(FString& Name, FAccessory Accessory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAccessoryMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAccessoryEmptySlotNum(const FAccessory& InAccessory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAccessoryEffectGrade(const EAccessoryEffectType& InType, const int32& InParam);
    
};

