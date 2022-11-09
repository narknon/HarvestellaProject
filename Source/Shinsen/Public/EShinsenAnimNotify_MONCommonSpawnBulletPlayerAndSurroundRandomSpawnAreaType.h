#pragma once
#include "CoreMinimal.h"
#include "EShinsenAnimNotify_MONCommonSpawnBulletPlayerAndSurroundRandomSpawnAreaType.generated.h"

UENUM(BlueprintType)
enum class EShinsenAnimNotify_MONCommonSpawnBulletPlayerAndSurroundRandomSpawnAreaType : uint8 {
    PlayerOrBehindPlayer,
    DiagonalPair,
    EShinsenAnimNotify_MAX UMETA(Hidden),
};

