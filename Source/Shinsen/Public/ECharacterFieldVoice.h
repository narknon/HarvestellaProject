#pragma once
#include "CoreMinimal.h"
#include "ECharacterFieldVoice.generated.h"

UENUM(BlueprintType)
enum class ECharacterFieldVoice : uint8 {
    None,
    GreetMorning,
    GreetMidday,
    GreetNight,
    GreetSP1,
    GreetSP2,
    GreetHomeLeave,
    GreetHomeBack,
    Trusted1,
    Trusted2,
    Location1,
    Location2,
    Location3,
    ChangeSeason,
    DeathSeason,
    Farm,
    Harvest,
    BreakTime,
    Letter,
    Max,
};

