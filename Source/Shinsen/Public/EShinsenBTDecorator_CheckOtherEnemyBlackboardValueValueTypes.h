#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTDecorator_CheckOtherEnemyBlackboardValueValueTypes.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTDecorator_CheckOtherEnemyBlackboardValueValueTypes : uint8 {
    S32,
    F32,
    Bool,
    EShinsenBTDecorator_MAX UMETA(Hidden),
};

