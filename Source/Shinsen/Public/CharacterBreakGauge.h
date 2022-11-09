#pragma once
#include "CoreMinimal.h"
#include "ECharacterAttr.h"
#include "CharacterBreakGauge.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FCharacterBreakGauge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAttr Attr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rate;
    
    FCharacterBreakGauge();
};

