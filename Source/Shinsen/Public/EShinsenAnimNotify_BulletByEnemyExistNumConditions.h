#pragma once
#include "CoreMinimal.h"
#include "EShinsenAnimNotify_BulletByEnemyExistNumConditions.generated.h"

UENUM(BlueprintType)
enum class EShinsenAnimNotify_BulletByEnemyExistNumConditions : uint8 {
    GreaterThan,
    LessThan,
    GreaterThanOrEqual,
    LessThanOrEqual,
    Equal,
    EShinsenAnimNotify_MAX UMETA(Hidden),
};

