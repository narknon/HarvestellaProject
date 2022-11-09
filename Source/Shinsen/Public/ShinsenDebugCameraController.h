#pragma once
#include "CoreMinimal.h"
#include "Engine/DebugCameraController.h"
#include "ShinsenDebugCameraController.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API AShinsenDebugCameraController : public ADebugCameraController {
    GENERATED_BODY()
public:
    AShinsenDebugCameraController();
};

