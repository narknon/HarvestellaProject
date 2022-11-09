#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTDecorator_CharacterDamageTypeSearchType.generated.h"

UENUM(BlueprintType)
enum class EShinsenBTDecorator_CharacterDamageTypeSearchType : uint8 {
    Player,
    Enemy,
    EShinsenBTDecorator_MAX UMETA(Hidden),
};

