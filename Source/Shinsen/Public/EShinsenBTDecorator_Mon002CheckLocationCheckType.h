#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTDecorator_Mon002CheckLocationCheckType.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTDecorator_Mon002CheckLocationCheckType : uint8 {
    PointNo,
    OutFieldAny,
    FieldNo,
    SpecialFieldAny,
    PlayerField,
    EShinsenBTDecorator_MAX UMETA(Hidden),
};

