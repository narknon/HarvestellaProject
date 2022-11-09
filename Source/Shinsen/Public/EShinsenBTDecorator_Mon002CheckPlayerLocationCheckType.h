#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTDecorator_Mon002CheckPlayerLocationCheckType.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTDecorator_Mon002CheckPlayerLocationCheckType : uint8 {
    OutFieldAny,
    FieldNo,
    Mon002Field,
    EShinsenBTDecorator_MAX UMETA(Hidden),
};

