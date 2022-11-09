#pragma once
#include "CoreMinimal.h"
#include "EFaceType.generated.h"

UENUM(BlueprintType)
enum class EFaceType : uint8 {
    Face_Default,
    Face_Default2,
    Face_Angry,
    Face_Angry2,
    Face_Angry3,
    Face_Sad,
    Face_Laugh,
    Face_Smile,
    Face_Smile2,
    Face_Taunt,
    Face_Serious,
    Face_Surprise,
    Face_Stunned,
    Face_Trouble,
    Max,
};

