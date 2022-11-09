#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "LwSysFL_Util.generated.h"

class USkeletalMeshComponent;
class UStaticMeshComponent;
class AActor;
class UPrimitiveComponent;
class UDecalComponent;
class UObject;
class APawn;
class APlayerController;
class AHUD;
class USceneComponent;

UCLASS(Blueprintable)
class LWSYS_API ULwSysFL_Util : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULwSysFL_Util();
    UFUNCTION(BlueprintCallable)
    static void startCameraFadeOutFromStartAlpha(float InFadeTime, float InStartAlpha, FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    static void startCameraFadeOut(float InFadeTime, FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    static void startCameraFadeInFromStartAlpha(float InFadeTime, float InStartAlpha);
    
    UFUNCTION(BlueprintCallable)
    static void startCameraFadeIn(float InFadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimeScale(float TimeScale);
    
    UFUNCTION(BlueprintCallable)
    static void SetStaticMeshLightChannels(UStaticMeshComponent* InStaticMeshComponent, bool InChannel0, bool InChannel1, bool InChannel2);
    
    UFUNCTION(BlueprintCallable)
    static void SetStaticMeshIndirectLightingCacheQuality(UStaticMeshComponent* InStaticMeshComponent, TEnumAsByte<EIndirectLightingCacheQuality> InIndirectLightingCacheQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetSkeletalMeshLightChannels(USkeletalMeshComponent* InSkeletalMeshComponent, bool InChannel0, bool InChannel1, bool InChannel2);
    
    UFUNCTION(BlueprintCallable)
    static void SetSkeletalMeshIndirectLightingCacheQuality(USkeletalMeshComponent* InSkeletalMeshComponent, TEnumAsByte<EIndirectLightingCacheQuality> InIndirectLightingCacheQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetSafeFolderPath(AActor* InActor, const FName& NewFolderPath);
    
    UFUNCTION(BlueprintCallable)
    static void SetSafeActorLabel(AActor* InActor, const FString& InNewActorLabel, bool InMarkDirty);
    
    UFUNCTION(BlueprintCallable)
    static void SetRefractionQuality(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    static void SetMeshLightChannels(UPrimitiveComponent* InPrimitiveComponent, bool InChannel0, bool InChannel1, bool InChannel2);
    
    UFUNCTION(BlueprintCallable)
    static void SetMeshIndirectLightingCacheQuality(UPrimitiveComponent* InPrimitiveComponent, TEnumAsByte<EIndirectLightingCacheQuality> InIndirectLightingCacheQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetDynamicResMinScreenPercentage(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDynamicResMaxScreenPercentage(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void setDecalSizeFrontAndSide(UDecalComponent* InDecalComponent, const float InFrontSize, const float InSideSize, const float InHeight);
    
    UFUNCTION(BlueprintCallable)
    static void setDecalSize(UDecalComponent* InDecalComponent, const float InSize, const float InHeight);
    
    UFUNCTION(BlueprintCallable)
    static void setCpuBoostModeEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void RestoreRefractionQuality();
    
    UFUNCTION(BlueprintCallable)
    static void RestoreDynamicResMinScreenPercentage();
    
    UFUNCTION(BlueprintCallable)
    static void RestoreDynamicResMaxScreenPercentage();
    
    UFUNCTION(BlueprintCallable)
    static void ResetTimeScale();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveNotVaild(UPARAM(Ref) TArray<UObject*>& inArray);
    
    UFUNCTION(BlueprintCallable)
    static void RefClampMinInt(UPARAM(Ref) int32& InOutValue, int32 InMin, int32& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void RefClampMinFloat(UPARAM(Ref) float& InOutValue, float InMin, float& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void RefClampMaxInt(UPARAM(Ref) int32& InOutValue, int32 InMax, int32& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void RefClampMaxFloat(UPARAM(Ref) float& InOutValue, float InMax, float& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void RefClampInt(UPARAM(Ref) int32& InOutValue, int32 InMin, int32 InMax, int32& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void RefClampFloat(UPARAM(Ref) float& InOutValue, float InMin, float InMax, float& OutValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsZero(float InValue, bool& bOutBool);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSwitchPlatform();
    
    UFUNCTION(BlueprintCallable)
    static bool IsActual();
    
    UFUNCTION(BlueprintCallable)
    static float GetTimeScale();
    
    UFUNCTION(BlueprintCallable)
    static bool getNavigationLocationByPawn(APawn* InObject, const FVector& InLocation, FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable)
    static APlayerController* GetMyPlayerController(const UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    static AHUD* GetMyHUD(const UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    static USceneComponent* findClosestSceneComponent(const TArray<USceneComponent*>& Components, const FVector& InLocation);
    
};

