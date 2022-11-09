#pragma once
#include "CoreMinimal.h"
#include "EMapTownKind.generated.h"

UENUM(BlueprintType)
enum class EMapTownKind : uint8 {
    Lethe,
    Nemea,
    Shatolla,
    Argene,
    Max,
};

