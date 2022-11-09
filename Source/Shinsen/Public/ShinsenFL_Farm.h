#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EFarmFacilityType.h"
#include "EFarmAction.h"
#include "EFarmActionStaminaLevel.h"
#include "EFarmKind.h"
#include "ShinsenFL_Farm.generated.h"

class UObject;

UCLASS(Blueprintable)
class SHINSEN_API UShinsenFL_Farm : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UShinsenFL_Farm();
    UFUNCTION(BlueprintCallable)
    static void SetActionLevelFromFlag();
    
    UFUNCTION(BlueprintCallable)
    static bool IsWitherSeason(const FString& FarmID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlacingItem(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable)
    static void InitObstacleRocks();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void InitFarm(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlacingItemGridSize(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable)
    static void GetGrowSeason(const FString& FarmID, bool& bGrow, int32& GrowRate);
    
    UFUNCTION(BlueprintCallable)
    static void GetGrowCrops(const FString& FarmID, int32 Level, FString& ItemId, int32& Num);
    
    UFUNCTION(BlueprintCallable)
    static EFarmFacilityType GetFarmFacilityType(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetExpandLevelFromFlag();
    
    UFUNCTION(BlueprintCallable)
    static void EnableWatarFallSound();
    
    UFUNCTION(BlueprintCallable)
    static void DebugSetLevel(EFarmKind Kind, int32 Level);
    
    UFUNCTION(BlueprintCallable)
    static void DebugSetExpandLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    static void DebugSetActionStaminaLevel(EFarmActionStaminaLevel Action, int32 Level);
    
    UFUNCTION(BlueprintCallable)
    static void DebugSetActionLevel(EFarmAction Action, int32 Level);
    
    UFUNCTION(BlueprintCallable)
    static bool CanSowSeason(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable)
    static bool CanPlant(const FString& ItemId, EFarmKind Kind);
    
};

