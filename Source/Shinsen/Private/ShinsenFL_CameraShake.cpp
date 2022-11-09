#include "ShinsenFL_CameraShake.h"

class APlayerController;
class UShinsenCameraShake;

void UShinsenFL_CameraShake::StopCameraShake(APlayerController* InPlyaerController, UShinsenCameraShake* InInstance, bool bInImmediately) {
}

void UShinsenFL_CameraShake::StopAllTypeCameraShake(APlayerController* InPlyaerController, EShinsenCameraShakeType InType, bool bInImmediately) {
}

void UShinsenFL_CameraShake::StopAllCameraShake(APlayerController* InPlyaerController, bool bInImmediately) {
}

UShinsenCameraShake* UShinsenFL_CameraShake::PlayCameraShakeSimple(APlayerController* InPlyaerController, float InTime, float InScale, EShinsenCameraShakeType InType) {
    return NULL;
}

UShinsenCameraShake* UShinsenFL_CameraShake::PlayCameraShake(APlayerController* InPlyaerController, const FLwSysCameraShakeParam& InParam, EShinsenCameraShakeType InType) {
    return NULL;
}

UClass* UShinsenFL_CameraShake::GetCameraShakeClass(EShinsenCameraShakeType InType) {
    return NULL;
}

UShinsenFL_CameraShake::UShinsenFL_CameraShake() {
}

