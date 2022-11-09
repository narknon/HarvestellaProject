#pragma once
#include "CoreMinimal.h"
#include "EShinsenTableRow_AIRange.generated.h"

UENUM(BlueprintType)
enum class EShinsenTableRow_AIRange : uint8 {
    NEAR,
    MIDDLE,
    FAR,
    EShinsenTableRow_MAX UMETA(Hidden),
};

