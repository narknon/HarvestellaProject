#pragma once
#include "CoreMinimal.h"
#include "EShinsenAnimNotify_BulletByBlackboardBulletValueTypes.generated.h"

UENUM(BlueprintType)
enum class EShinsenAnimNotify_BulletByBlackboardBulletValueTypes : uint8 {
    S32,
    F32,
    Bool,
    EShinsenAnimNotify_MAX UMETA(Hidden),
};

