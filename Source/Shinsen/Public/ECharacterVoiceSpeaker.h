#pragma once
#include "CoreMinimal.h"
#include "ECharacterVoiceSpeaker.generated.h"

UENUM(BlueprintType)
enum class ECharacterVoiceSpeaker : uint8 {
    Single,
    AnyFriend,
    AnyPlayerParty,
};

