#pragma once
#include "CoreMinimal.h"
#include "MatineeCameraShake.h"
#include "ShinsenCameraShake.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenCameraShake : public UMatineeCameraShake {
    GENERATED_BODY()
public:
    UShinsenCameraShake();
};

