#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTDecorator_CharacterExistNumWithDistanceSearchType.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTDecorator_CharacterExistNumWithDistanceSearchType : uint8 {
    Enemy,
    Player,
    Both,
    EShinsenBTDecorator_MAX UMETA(Hidden),
};

