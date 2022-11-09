#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTDecorator_CharacterDistanceSearchType.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTDecorator_CharacterDistanceSearchType : uint8 {
    Player,
    Enemy,
    Target,
    EShinsenBTDecorator_MAX UMETA(Hidden),
};

