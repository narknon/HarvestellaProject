#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTDecorator_CharacterDistanceCheckType.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTDecorator_CharacterDistanceCheckType : uint8 {
    Distance,
    SkillID,
    AttackType,
    EShinsenBTDecorator_MAX UMETA(Hidden),
};

