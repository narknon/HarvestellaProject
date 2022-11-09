#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADAutoSePartsType.generated.h"

UENUM(BlueprintType)
namespace ESQEXSEADAutoSePartsType {
    enum Type {
        Invalid /*= -0x1*/,
        Foot,
        Arm,
        Wing,
        Swing,
        Body,
    };
}

