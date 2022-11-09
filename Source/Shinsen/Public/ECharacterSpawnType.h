#pragma once
#include "CoreMinimal.h"
#include "ECharacterSpawnType.generated.h"

UENUM(BlueprintType)
enum class ECharacterSpawnType : uint8 {
    Npc,
    Player,
    Enemy,
    Demo,
};

