#pragma once
#include "CoreMinimal.h"
#include "MatineeCameraShake.h"
#include "LwSysCameraShakeParam.h"
#include "LwSysCameraShake.generated.h"

class APlayerController;
class ULwSysCameraShake;

UCLASS(Blueprintable, EditInlineNew)
class LWSYS_API ULwSysCameraShake : public UMatineeCameraShake {
    GENERATED_BODY()
public:
    ULwSysCameraShake();
    UFUNCTION(BlueprintCallable)
    static void StopCameraShakeFromCameraManager(APlayerController* InPlyaerController, ULwSysCameraShake* Instance, bool bInImmediately);
    
    UFUNCTION(BlueprintCallable)
    static void StopCameraShake(APlayerController* InPlyaerController, bool bInImmediately);
    
    UFUNCTION(BlueprintCallable)
    static ULwSysCameraShake* PlayCameraShakeFromCameraManager(APlayerController* InPlyaerController, const FLwSysCameraShakeParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    static void PlayCameraShake(APlayerController* InPlyaerController, const FLwSysCameraShakeParam& InParam);
    
};

