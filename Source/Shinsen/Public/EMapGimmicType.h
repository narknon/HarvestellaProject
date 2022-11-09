#pragma once
#include "CoreMinimal.h"
#include "EMapGimmicType.generated.h"

UENUM(BlueprintType)
enum class EMapGimmicType : uint8 {
    Unknown,
    Ladder,
    Bridge,
    CrackedWall,
    MonolightWall,
    AutoDoor,
    Fountain,
    FountainSwitch,
    DrainageSwitch,
    MonolightWarp,
    AutomaticDoor,
    DoorConsole,
    Elevator,
};

