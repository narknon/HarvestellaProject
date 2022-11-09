#pragma once
#include "CoreMinimal.h"
#include "EAccessoryEffectType.generated.h"

UENUM(BlueprintType)
enum class EAccessoryEffectType : uint8 {
    None,
    AtkPhys,
    AtkMagic,
    DefPhys,
    DefMagic,
    ResZan,
    ResGeki,
    ResSai,
    ResHa,
    ResHi,
    ResFuu,
    ResSui,
    ResChi,
    ResHyou,
    ResRai,
    ResTetsu,
    ResDoku,
    GrdPoison,
    GrdStun,
    GrdSlow,
    GrdBind,
    GrdCharm,
    GrdFear,
    GrdHvyStomach,
    GrdStomachache,
    Eat,
    JobPoint,
    Hp,
    Critical,
};

