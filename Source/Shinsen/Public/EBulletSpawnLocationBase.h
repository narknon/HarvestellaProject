#pragma once
#include "CoreMinimal.h"
#include "EBulletSpawnLocationBase.generated.h"

UENUM(BlueprintType)
enum class EBulletSpawnLocationBase : uint8 {
    Self,
    Target,
    SelfGround,
    TargetGround,
    SelfSocket,
    SelfAttach,
    World,
};

