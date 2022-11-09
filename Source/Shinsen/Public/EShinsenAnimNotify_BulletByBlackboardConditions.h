#pragma once
#include "CoreMinimal.h"
#include "EShinsenAnimNotify_BulletByBlackboardConditions.generated.h"

UENUM(BlueprintType)
enum class EShinsenAnimNotify_BulletByBlackboardConditions : uint8 {
    GreaterThan,
    LessThan,
    GreaterThanOrEqual,
    LessThanOrEqual,
    Equal,
    EShinsenAnimNotify_MAX UMETA(Hidden),
};

