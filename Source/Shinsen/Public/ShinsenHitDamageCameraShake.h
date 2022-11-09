#pragma once
#include "CoreMinimal.h"
#include "ShinsenCameraShake.h"
#include "ShinsenHitDamageCameraShake.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenHitDamageCameraShake : public UShinsenCameraShake {
    GENERATED_BODY()
public:
    UShinsenHitDamageCameraShake();
};

