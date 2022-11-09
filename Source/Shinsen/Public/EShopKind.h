#pragma once
#include "CoreMinimal.h"
#include "EShopKind.generated.h"

UENUM(BlueprintType)
enum class EShopKind : uint8 {
    Lethe,
    Nemea,
    Shatolla,
    Argene,
    Max,
};

