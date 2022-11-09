#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EShinsenCameraShakeType.h"
#include "LwSysCameraShakeParam.h"
#include "ShinsenFL_CameraShake.generated.h"

class APlayerController;
class UShinsenCameraShake;

UCLASS(Blueprintable)
class SHINSEN_API UShinsenFL_CameraShake : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UShinsenFL_CameraShake();
    UFUNCTION(BlueprintCallable)
    static void StopCameraShake(APlayerController* InPlyaerController, UShinsenCameraShake* InInstance, bool bInImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void StopAllTypeCameraShake(APlayerController* InPlyaerController, EShinsenCameraShakeType InType, bool bInImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void StopAllCameraShake(APlayerController* InPlyaerController, bool bInImmediately);
    
    UFUNCTION(BlueprintCallable)
    static UShinsenCameraShake* PlayCameraShakeSimple(APlayerController* InPlyaerController, float InTime, float InScale, EShinsenCameraShakeType InType);
    
    UFUNCTION(BlueprintCallable)
    static UShinsenCameraShake* PlayCameraShake(APlayerController* InPlyaerController, const FLwSysCameraShakeParam& InParam, EShinsenCameraShakeType InType);
    
    UFUNCTION(BlueprintCallable)
    static UClass* GetCameraShakeClass(EShinsenCameraShakeType InType);
    
};

