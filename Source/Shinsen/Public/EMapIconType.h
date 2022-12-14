#pragma once
#include "CoreMinimal.h"
#include "EMapIconType.generated.h"

UENUM(BlueprintType)
enum class EMapIconType : uint8 {
    NoIcon,
    Player,
    Fear,
    Quest,
    QuestMS,
    QuestCQ,
    QuestTQ,
    Monolight,
    AreaChange,
    Gimmick,
    Ladder,
    Bridge,
    Inn,
    Shop,
    Blacksmith,
    Carpenter,
    House,
    Wonder,
    Fishing,
    Gathering,
    Mining,
    TreasureBox,
    Unknown,
    CoronelShop,
    Memo,
    RepairLv1,
    RepairLv2,
    BombLv1,
    BombLv2,
    Switch,
    MonolightWind,
    MonolightWinter,
    Door,
    DoorClose,
    DoorLockKey,
    DoorLockSwitch,
    SwitchDoorOpen,
    SwitchDoorClose,
    PlantWallRed,
    PlantWallBlue,
    Fountain,
    TransporterA,
    TransporterB,
    TransporterC,
    TransporterD,
    TransporterE,
    TransporterF,
    TransporterG,
    TransporterH,
    TransporterI,
    TransporterJ,
    TransporterK,
    TransporterL,
    MiniEvent,
    Maze,
    OrderCook,
    OrderFish,
    QuestTQStart,
    QuestTQInProgress,
    QuestTQReward,
    Investigation,
};

