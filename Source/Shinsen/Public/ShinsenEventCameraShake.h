#pragma once
#include "CoreMinimal.h"
#include "ShinsenCameraShake.h"
#include "ShinsenEventCameraShake.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenEventCameraShake : public UShinsenCameraShake {
    GENERATED_BODY()
public:
    UShinsenEventCameraShake();
};

