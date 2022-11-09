#pragma once
#include "CoreMinimal.h"
#include "EShinsenShinsenBTDecorator_MyBlackboardMultiConditionsValueTypes.generated.h"

UENUM(BlueprintType)
enum class EShinsenShinsenBTDecorator_MyBlackboardMultiConditionsValueTypes : uint8 {
    S32,
    F32,
    Bool,
    EShinsenShinsenBTDecorator_MAX UMETA(Hidden),
};

